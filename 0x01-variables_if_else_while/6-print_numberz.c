
 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints all single-digit numbers of base 10 starting from 0.

 */


#include <stdio.h>

int main(){


    int start = 48;
    int maxSingleDigit = 57;
    int count = start;

    while(count <= maxSingleDigit){

        putchar(count);
        count++;
    }
    putchar('\n');
    return (0);
}
