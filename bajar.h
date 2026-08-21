#include <stdio.h>
#include "bajar.h"
#include "indicator.h"

void Control_Bajar(void)
{
    if (Indicator_BotonBajar())
    {
        Indicator_Bajar();

        printf("Elevador bajando\r\n");
        HAL_Delay(3000);
        /* Esperar a que se libere el botón */
        while (Indicator_BotonBajar())
        {
        }
    }
}
