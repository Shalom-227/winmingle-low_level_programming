/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that checks lowercase character
*/


#include "main.h"


int _islower(int checkV){
   
    int firstAlpha = 'a';
    int lastAlpha = 'z';
 
    while(firstAlpha <= lastAlpha){

        if(checkV == firstAlpha){
            return 1;
        }
        firstAlpha++;
     
    }
    _putchar('\n');
    return 0;
}       
