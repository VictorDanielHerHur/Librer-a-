#include <stdio.h>
#include "subir.h"
#include "indicator.h"

void Control_Subir(void)
{
    if (Indicator_BotonSubir())
    {
        Indicator_Subir();

        printf("Elevador subiendo\r\n");

        /* Esperar a que se libere el botón */
        while (Indicator_BotonSubir())
        {
        }
    }
}
