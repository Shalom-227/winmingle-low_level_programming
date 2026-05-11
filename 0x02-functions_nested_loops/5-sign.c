/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that prints the sign of a number.
*/


#include "main.h"


 int print_sign(int num){
   
    if (num > 0){
        _putchar('+');
        return 1;
    }
    else if (num < 0){
        _putchar('-');
        return -1;
    }    
    _putchar('0');
    return 0;
}
