#ifndef FIRMWARE_H
#define FIRMWARE_H

#include <stdint.h>
#include <stdbool.h>

// irq.c
uint32_t *irq(uint32_t *regs, uint32_t irqs);
typedef enum{
    EN_FW_LED_RESET = 0,
    EN_FW_LED_LOPPING,
    EN_FW_LED_MAX,
} E_FW_LED_STATUS;


#endif
