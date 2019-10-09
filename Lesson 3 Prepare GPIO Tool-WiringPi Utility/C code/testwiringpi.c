/*****************************************************************
*Filename      : testwiringpi.c
*Description   : this program controls led flashing with wiringPi
*Author        : bihui gao
*Websit        : www.osoyoo.com
*Support E-mail: support@osoyoo.com
*Update        : 2017/06/23
******************************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define LEDPIN  0

int main(){
    //when initialize wiring failed,print message to screen
    if(wiringPiSetup()== -1){
        printf("Setup wiringPi Failed!");
        return -1;
    }

    pinMode(LEDPIN,OUTPUT);
    printf("\n");
    printf("\n");
    printf("********************************|\n");
    printf("|       LED Blink               |\n");
    printf("|  -----------------------      |\n");
    printf("|                               |\n");
    printf("|   LED connect to GPIO 0       |\n");
    printf("|                               |\n");
    printf("|   LED will blink at 500ms     |\n");
    printf("|                         OSOYOO|\n");
    printf("********************************|\n");

    while(1){
        digitalWrite(LEDPIN,LOW);
        printf("...LED OFF\n");
        printf("\n");
        delay(500);
        digitalWrite(LEDPIN,HIGH);
        printf("LED ON...\n");
        printf("\n");
        delay(500);
    }
    return 0;
}
