/* 
 * File:   main.c
 * Author: Mayank
 *
 * Created on September 20, 2015, 6:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
/*
 * 
 */

//declaring global variables
#define led_test RA2
volatile unsigned int flag=0;
extern TMR1_Initialize();
extern TMR1_StartTimer();
extern PIN_MANAGER_Initialize();

int main() {
    
    int i=0; //counter for software delay
    //TMR1_Initialize();
    //TMR1_StartTimer();
    PIN_MANAGER_Initialize();
    TMR1_Initialize();
    
    
    RA2=1;        
    while(1)
    {
        
    }
    return (EXIT_SUCCESS);
}

