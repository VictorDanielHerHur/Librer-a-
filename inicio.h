int main(void)
{
    Indicator_Init();

    printf("Elevador iniciado\r\n");
#define RETRASO_MS  500   // Milisegundos entre pasos

// Dentro de cada if:
HAL_Delay(RETRASO_MS);   // función de retardo
uint8_t estado_elevador = 0; // 0=Detenido, 1=Subiendo, 2=Bajando
// ====================== LÍMITES DEL ELEVADOR ==================
#define RETRASO_MS     100
#define PISO_MIN       1
#define PISO_MAX       5

uint8_t estado_elevador = 0; // 0=Detenido, 1=Subiendo, 2=Bajando
int piso_actual = 1;

// ====================== FUNCIONES ITM =========================
// ====================== FUNCIONES ITM =========================
void ITM_SendChar(uint8_t character)
{
    ITM_TER |= 1U;
    ITM_TCR |= 1U;
    DEMCR |= (1U << 24);
    while((ITM_STIMULUS_PORT0 & 1U) == 0U);
    ITM_STIMULUS_PORT0 = character;
}

int _write(int file, char *ptr, int len)
{
    int i;
    (void)file;
    for(i = 0; i < len; i++) ITM_SendChar((uint8_t)*ptr++);
    return len;
}



      

