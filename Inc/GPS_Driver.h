#ifndef GPS_DRIVER_H_
#define GPS_DRIVER_H_

#include "stdint.h"
#include "USART_Driver.h"

void GPS_ProcessRxByte(uint8_t rxdata);

extern USART_Struct_T Usart1Struct;

#endif /* GPS_DRIVER_H_ */
