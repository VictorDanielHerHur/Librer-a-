int main(void)
{
    Indicator_Init();

    printf("Elevador iniciado\r\n");
#define RETRASO_MS  500   // Milisegundos entre pasos

// Dentro de cada if:
HAL_Delay(RETRASO_MS);   // o tu función de retardo
uint8_t estado_elevador = 0; // 0=Detenido, 1=Subiendo, 2=Bajando

