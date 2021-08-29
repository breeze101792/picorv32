#ifndef FIRMWARE_H
#define FIRMWARE_H

#include <stdint.h>
#include <stdbool.h>

// irq.c
uint32_t *irq(uint32_t *regs, uint32_t irqs);
typedef enum{
    EN_FW_STATUS_RESET = 0,
    EN_FW_STATUS_LOPPING,
    EN_FW_STATUS_MAX,
    EN_FW_STATUS_ERR_LOPPING = 0x80,
    EN_FW_STATUS_ERR_MAX,
} E_FW_STATUS;


#endif
