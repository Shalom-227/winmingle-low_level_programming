 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A program that prints all possible different combinations of three digits.
*/


#include <stdio.h>

int main(){

    int countV1 = '0';
    int countV2;
    int countV3;
    int maxSingleDigit = '9';


    while(countV1 <= maxSingleDigit){
	countV2 = countV1 + 1;

	while(countV2 <= maxSingleDigit){
	    countV3 = countV2 + 1;

	    while(countV3 <= maxSingleDigit){

	        putchar(countV1);
                putchar(countV2);
		putchar(countV3);
		
                if(!(countV1 == '7' && countV2 == '8' && countV3 == '9')){
	            putchar(',');
		}
	        countV3++;
            }
            countV2++;
        }
	countV1++;
    }
    putchar('\n');
    return(0);
}
