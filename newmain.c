/*
 * File:   newmain.c
 * Author: Hp
 *
 * Created on February 6, 2022, 6:42 PM
 */
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define _XTAL_FREQ 20000000 //Specify the XTAL crystall FREQ

void main(void) {
    
    TRISA=0X00;
    TRISB=0X00;
    TRISC=0X00;
    TRISD=0X00;
    
    while(1){
      RB1=1;
      RD1=1;
      RC3=1;
      RD2=RB2=0;
      RC2=RD0=RB3=0;
      RC0=RD7=1;
      __delay_ms(5000);
      RB1=0;
      RD1=0;
      RC3=0;
      RD2=RB2=1;
      RC2=RB3=RC0=1;
      RD7=RD0=0;
      __delay_ms(5000);
      RB1=1;
      RD1=0;
      RC3=1;
      RB2=0;
      RC2=RB3=0;
      RC0=0;
      RD2=1;
      RD7=1;
      RD0=1;
      __delay_ms(5000);
    }
    
    return;
}