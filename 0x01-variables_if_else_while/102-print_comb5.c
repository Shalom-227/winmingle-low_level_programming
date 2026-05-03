 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A program that prints all possible different combinations of two two-digit numbers.
*/


#include <stdio.h>

int main(){

    int countV1 = 0;
    int countV2;
    int maxDoubleDigit = 99;


    while(countV1 <= 98){
	countV2 = countV1 + 1;

	while(countV2 <= maxDoubleDigit){

	        printf("%d %d", countV1, countV2);
		
                if(!(countV1 == 98 && countV2 == maxDoubleDigit )){
	            putchar(',');
		}
	        countV2++;
            }
            countV1++;
        }
    putchar('\n');
    return(0);
}
