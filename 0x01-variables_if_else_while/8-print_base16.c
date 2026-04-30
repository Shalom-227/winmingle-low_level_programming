/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints all numbers in base 16 in lowercase.
*/


#include <stdio.h>

int main(){

    int start = 0;
    int stop = 15;

    while(start <= stop){

        printf("%x", start);
        start++;
    }
    
    return(0);
}


 
