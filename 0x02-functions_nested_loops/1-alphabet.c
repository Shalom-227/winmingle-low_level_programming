 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: prints the alphabet in lowercase, followed by a new line.
 */


#include "main.h"
#include <unistd.h>


void print_alphabet(void){
    char firstLowerCase = 'a';
    char lastLowerCase = 'z';
    char indexV = firstLowerCase;

    while(indexV <= lastLowerCase){
        _putchar(indexV);
        indexV++;
    }
    _putchar('\n');
}
