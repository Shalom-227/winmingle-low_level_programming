 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that assigns a random number to the variable n and prints whether number is +, -, or zero

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand(time(NULL));   //setup function
    int n = rand() - (RAND_MAX / 2); //aid to include negative numbers
    if(n > 0){
        printf("%d is positive\n", n);
    }else if(n < 0){
        printf("%d is negative\n", n);
    }else{
        printf("%d is zero\n", n);
    }
}

