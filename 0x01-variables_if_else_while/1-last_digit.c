 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints the last digit of a random number n.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand(time(NULL));
    int n = rand() - (RAND_MAX / 2);
    int lastDigit = n % 10;

    if(lastDigit > 5){
	printf("Last digit of %d is %d and is greater than 5\n", n,lastDigit);
    }else if(lastDigit != 0 && lastDigit <= 6){
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lastDigit);
    }else{ 
	printf("Last digit of %d is %d and is 0\n", n,lastDigit);
    }
	
    return (0);
}
