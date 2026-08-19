#include "Motor.h"

/* =====================================================
   LIBRERÍA DE CONTROL DE MOTOR PASO A PASO
   STM32F407
   ===================================================== */

/* Pines del motor */
#define IN1_PIN 5
#define IN2_PIN 6
#define IN3_PIN 7
#define IN4_PIN 8

/* Variables de control */
static uint8_t paso = 0;
static uint8_t direccion = 1;
static uint8_t motorActivo = 0;

/* Retardo entre pasos
   Menor retardo = mayor velocidad */
static uint16_t retardo = 10;


/* =====================================================
   SECUENCIA DE 8 PASOS
   ===================================================== */

static const uint8_t secuencia[8][4] =
{
    {1,0,0,0},
    {1,1,0,0},
    {0,1,0,0},
    {0,1,1,0},
    {0,0,1,0},
    {0,0,1,1},
    {0,0,0,1},
    {1,0,0,1}
};


/* =====================================================
   INICIALIZAR MOTOR
   ===================================================== */

void Motor_Init(void)
{
    /* Configurar PA5, PA6, PA7 y PA8 como salidas */

    GPIOA->MODER &= ~(
        (3 << (IN1_PIN * 2)) |
        (3 << (IN2_PIN * 2)) |
        (3 << (IN3_PIN * 2)) |
        (3 << (IN4_PIN * 2))
    );

    GPIOA->MODER |= (
        (1 << (IN1_PIN * 2)) |
        (1 << (IN2_PIN * 2)) |
        (1 << (IN3_PIN * 2)) |
        (1 << (IN4_PIN * 2))
    );

    /* Apagar las cuatro salidas */

    GPIOA->ODR &= ~(
        (1 << IN1_PIN) |
        (1 << IN2_PIN) |
        (1 << IN3_PIN) |
        (1 << IN4_PIN)
    );

    paso = 0;
    direccion = 1;
    motorActivo = 0;
    retardo = 10;
}


/* =====================================================
   GIRO HORARIO
   ===================================================== */

void Motor_GiroHorario(void)
{
    direccion = 1;
    motorActivo = 1;
}


/* =====================================================
   GIRO ANTIHORARIO
   ===================================================== */

void Motor_GiroAntihorario(void)
{
    direccion = 0;
    motorActivo = 1;
}


/* =====================================================
   DETENER MOTOR
   ===================================================== */

void Motor_Detener(void)
{
    motorActivo = 0;

    GPIOA->ODR &= ~(
        (1 << IN1_PIN) |
        (1 << IN2_PIN) |
        (1 << IN3_PIN) |
        (1 << IN4_PIN)
    );
}


/* =====================================================
   EJECUTAR UN PASO
   ===================================================== */

void Motor_EjecutarPaso(void)
{
    /* Si el motor está detenido no hace nada */

    if(motorActivo == 0)
        return;


    /* Giro horario */

    if(direccion == 1)
    {
        paso = (paso + 1) % 8;
    }

    /* Giro antihorario */

    else
    {
        paso = (paso + 7) % 8;
    }


    /* IN1 */

    if(secuencia[paso][0])
        GPIOA->ODR |= (1 << IN1_PIN);
    else
        GPIOA->ODR &= ~(1 << IN1_PIN);


    /* IN2 */

    if(secuencia[paso][1])
        GPIOA->ODR |= (1 << IN2_PIN);
    else
        GPIOA->ODR &= ~(1 << IN2_PIN);


    /* IN3 */

    if(secuencia[paso][2])
        GPIOA->ODR |= (1 << IN3_PIN);
    else
        GPIOA->ODR &= ~(1 << IN3_PIN);


    /* IN4 */

    if(secuencia[paso][3])
        GPIOA->ODR |= (1 << IN4_PIN);
    else
        GPIOA->ODR &= ~(1 << IN4_PIN);


    /* Retardo */

    for(volatile uint32_t i = 0;
        i < ((uint32_t)retardo * 1000);
        i++);
}


/* =====================================================
   CONTROL DE VELOCIDAD MEDIANTE ADC
   ===================================================== */

void Motor_ConfigurarVelocidad(uint16_t valorADC)
{
    /*
       ADC = 0     → 10 ms/paso
       ADC = 4095  → 2 ms/paso

       Entre mayor sea el ADC,
       menor será el retardo y
       mayor será la velocidad.
    */

    retardo = 10 - ((uint32_t)valorADC * 8 / 4095);


    if(retardo < 2)
        retardo = 2;


    if(retardo > 10)
        retardo = 10;
}


/* =====================================================
   OBTENER RETARDO ACTUAL
   ===================================================== */

uint16_t Motor_ObtenerRetardo(void)
{
    return retardo;
}
