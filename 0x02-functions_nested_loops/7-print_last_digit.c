/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that prints the last digit of a number.
*/


#include "main.h"
#include "unistd.h"

int print_last_digit(int num){

    num = num % 10;
    if (num < 0){
        num = num * -1;
    }
    _putchar('0' + num);
    return num;
}
