#ifndef MOTOR_H
#define MOTOR_H

#include <stdint.h>

void Motor_Init(void);

void Motor_GiroHorario(void);

void Motor_GiroAntihorario(void);

void Motor_Detener(void);

void Motor_EjecutarPaso(void);

void Motor_ConfigurarVelocidad(uint16_t valorADC);

uint16_t Motor_ObtenerRetardo(void);

#endif
