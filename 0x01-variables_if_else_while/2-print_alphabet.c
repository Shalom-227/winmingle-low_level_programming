 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: prints the alphabet in lowercase, followed by a new line.
 */

#include <stdio.h>

int main(){

    int firstLowerLetter = 'a';
    int lastLowerLetter = 'z';
    int newLine = 10;
    int count = firstLowerLetter;

    while(count <= lastLowerLetter){
        putchar(count);
        putchar(newLine);
        count++;
    }
    return (0);
}
