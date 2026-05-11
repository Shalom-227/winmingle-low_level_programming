 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */


#include "main.h"


void print_alphabet_x10(void){
    
    int countV1 = 0;
	
    while(countV1 < 10){
   	
	int countV2 = 'a';
        while( countV2 <= 'z'){
            _putchar(countV2);
            countV2++;
        }
        _putchar('\n');
        countV1++;
  }
}
