**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A program that prints all possible combinations of single-digit numbers separated by commas and spaces
*/

#include <stdio.h>

int main(){

    int start = 0;
    int maxSingleDigit = 9;
    int countV = start;

    while(countV <= maxSingleDigit){
        
	if (countV != maxSingleDigit){
	   printf("%d, ", countV);
        }else{
	    printf("%d\n", maxSingleDigit);
        }
        countV++;
    }
    return (0);
}
