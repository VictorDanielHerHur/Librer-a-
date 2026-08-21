#include "debug.h"

#define ITM_STIMULUS_PORT0   ((volatile uint32_t)0xE0000000UL)
#define ITM_TER              ((volatile uint32_t)0xE0000E00UL)
#define ITM_TCR              ((volatile uint32_t)0xE0000E80UL)
#define DEMCR                ((volatile uint32_t)0xE000EDFCUL)

void ITM_SendChar(uint8_t character)
{
    ITM_TER |= 1U;
    ITM_TCR |= 1U;
    DEMCR |= (1U << 24);

    while ((ITM_STIMULUS_PORT0 & 1U) == 0U)
    {
    }

    ITM_STIMULUS_PORT0 = character;
}

int _write(int file, char *ptr, int len)
{
    (void)file;

    for (int i = 0; i < len; i++)
    {
        ITM_SendChar((uint8_t)*ptr++);
    }

    return len;
}
