/********************************************************************************************
*Filename      : relay_with_led.c
*Description   : control led with relay 
*Author        : alan
*Website       : www.osoyoo.com
*Update        : 2017/06/28
********************************************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

#define  RelayPin  0

int main(void){
    if(wiringPiSetup() == -1){ //when initialize wiring failed, print messageto screen
        printf("setup wiringPi failed !");
        exit(1); 
    }
    
    pinMode(RelayPin, OUTPUT);   //set GPIO0 output

    printf("\n");
    printf("|**************************************|\n");
    printf("|                 Relay                |\n");
    printf("|    ------------------------------    |\n");
    printf("| GPIO0 connect to relay's control pin |\n");
    printf("| led connect to relay's NormalOpen pin|\n");
    printf("|  5v connect to relay's COM pin       |\n");
    printf("|                                      |\n");
    printf("|      Make relay to control a led     |\n");
    printf("|                                      |\n");
    printf("|                                OSOYOO|\n");
    printf("|**************************************|\n");
    printf("\n");

    for(;;){
        // disconnect
        printf("|********************|\n");
        printf("|   ...Relay Close   |\n");
        printf("|********************|\n");
        digitalWrite(RelayPin, LOW);
        delay(1000);
        // connect
        printf("|********************|\n");
        printf("|   Relay Open...    |\n");
        printf("|********************|\n");
        digitalWrite(RelayPin, HIGH);
        delay(1000);
    }

    return 0;
}

