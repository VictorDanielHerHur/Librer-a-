#include "stm32f407g (2).h"

#include "debug.h"
#include "inicio.h"
#include "subir.h"
#include "bajar.h"

int main(void)
{
    /* Inicializar sistema */
    Sistema_Iniciar();

    while (1)
    {
        /* Revisar botón de subir */
        Control_Subir();

        /* Revisar botón de bajar */
        Control_Bajar();
    }
}
