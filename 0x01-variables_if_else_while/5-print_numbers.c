/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints all single-digit numbers of base 10 starting from 0.

 */




#include <stdio.h>

int main(){

    int countV = 0;
    int maxSingleDigit = 9;
    while (countV <= maxSingleDigit){
        printf("%d",countV);
	countV++;
    }
    printf("\n");

    return (0);
}
