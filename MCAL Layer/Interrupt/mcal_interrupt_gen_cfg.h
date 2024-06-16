/* 
 * File:   mcal_interrupt_gen_cfg.h
 * Author: Marwan Shehata
 *
 */

#ifndef MCAL_INTERRUPT_GEN_CFG_H
#define	MCAL_INTERRUPT_GEN_CFG_H

#define INTERRUPT_FEATURE_ENABLE    1
#define INTERRUPT_FEATURE_DISABLE   0

/* Interrupt Priority Configuration */
#define INTERRUPT_PRIORITY_LEVELS_ENABLE            INTERRUPT_FEATURE_DISABLE

/* External Interrupt Configuration */
#define EXTERNAL_INTERRUPT_INTx_FEATURE_ENABLE      INTERRUPT_FEATURE_DISABLE
#define EXTERNAL_INTERRUPT_OnChange_FEATURE_ENABLE  INTERRUPT_FEATURE_DISABLE

/* ADC Interrupt Configuration */
#define ADC_INTERRUPT_FEATURE_ENABLE                INTERRUPT_FEATURE_DISABLE

/* Timers Interrupt Configurations*/
#define TIMER0_INTERRUPT_FEATURE_ENABLE             INTERRUPT_FEATURE_DISABLE
#define TIMER1_INTERRUPT_FEATURE_ENABLE             INTERRUPT_FEATURE_DISABLE
#define TIMER2_INTERRUPT_FEATURE_ENABLE             INTERRUPT_FEATURE_DISABLE
#define TIMER3_INTERRUPT_FEATURE_ENABLE             INTERRUPT_FEATURE_DISABLE

/* CCP Interrupt Configurations */
#define CCP1_INTERRUPT_FEATURE_ENABLE               INTERRUPT_FEATURE_ENABLE
#define CCP2_INTERRUPT_FEATURE_ENABLE               INTERRUPT_FEATURE_ENABLE

/* EUSART Interrupt Configuration */
#define EUSART_TX_INTERRUPT_FEATURE_ENABLE          INTERRUPT_FEATURE_DISABLE
#define EUSART_RX_INTERRUPT_FEATURE_ENABLE          INTERRUPT_FEATURE_DISABLE

/* SPI Interrupt Configuration */
#define MSSP_SPI_INTERRUPT_FEATURE_ENABLE           INTERRUPT_FEATURE_DISABLE

/* I2C Interrupt Configuration */
#define MSSP_I2C_INTERRUPT_FEATURE_ENABLE           INTERRUPT_FEATURE_DISABLE

#endif	/* MCAL_INTERRUPT_GEN_CFG_H */

