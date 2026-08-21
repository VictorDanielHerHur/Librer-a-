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
}





      

