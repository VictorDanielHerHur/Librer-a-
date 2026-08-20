/INDICADORES LEDS, ITM, SUBIDA Y BAJADA DEL ELEVADOR/

#include <stdio.h>
#include <stdint.h>
#include "indicator.h"


#define ITM_STIMULUS_PORT0   (*(volatile uint32_t*)0xE0000000UL)
#define ITM_TER               (*(volatile uint32_t*)0xE0000E00UL)
#define ITM_TCR               (*(volatile uint32_t*)0xE0000E80UL)
#define DEMCR                 (*(volatile uint32_t*)0xE000EDFCUL)


/*
 * Envía un carácter mediante el puerto 0 del ITM.
 */
void ITM_SendChar(uint8_t character)
{
    /*
     * Habilitamos el canal 0 del ITM.
     */
    ITM_TER |= 1U;

    /*
     * Habilitamos el ITM.
     */
    ITM_TCR |= 1U;

    /*
     * Habilitamos el monitoreo mediante el registro DEMCR.
     * Bit 24 = TRCENA.
     */
    DEMCR |= (1U << 24);


    /*
     * Esperamos hasta que el puerto esté listo
     * para recibir el carácter.
     */
    while((ITM_STIMULUS_PORT0 & 1U) == 0U)
    {
    }


    /* Enviamos el carácter */
    ITM_STIMULUS_PORT0 = character;
}


/*
 * Redirige printf() hacia el ITM.
 */
int _write(int file, char *ptr, int len)
{
    int DataIdx;

    (void)file;

    for(DataIdx = 0; DataIdx < len; DataIdx++)
    {
        ITM_SendChar((uint8_t)*ptr++);
    }

    return len;
}


int main(void)
{
    /*
     * Inicializamos nuestro módulo de indicadores.
     */
    Indicator_Init();


    /*
     * Mensaje de prueba al iniciar.
     */
    printf("Elevador iniciado\r\n");


    while(1)
    {
        /*
         * Botón de subida.
         */
        if(Indicator_BotonSubir())
        {
            Indicator_Subir();

            printf("Elevador subiendo\r\n");


            /*
             * Esperamos a que se libere el botón
             * para evitar múltiples eventos.
             */
            while(Indicator_BotonSubir())
            {
            }
        }


        /*
         * Botón de bajada.
         */
        if(Indicator_BotonBajar())
        {
            Indicator_Bajar();

            printf("Elevador bajando\r\n");


            /*
             * Esperamos a que se libere el botón.
             */
            while(Indicator_BotonBajar())
            {
            }
        }
    }
