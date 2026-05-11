/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that computes the absolute value of an integer.
*/


#include "main.h"
#include "unistd.h"

int _abs(int num){
    
    if (num > 0){
        return num;
    }
    else if (num < 0){
       num = num * -1;
       return num;
    }
    else{
        num = 0;
    }
    return (0);
}
