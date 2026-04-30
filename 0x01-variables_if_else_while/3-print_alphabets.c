 /**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints the alphabet in lowercase, then uppercase, followed by a new line.

 */


#include <stdio.h>

int main(){
    int firstLowerLetter = 'a';
    int lastLowerLetter = 'z';
    int firstUpperCase = 'A';
    int lastUpperCase = 'Z';
    int count1 = firstLowerLetter;
    int count2 = firstUpperCase;
    
    while(count1 <= lastLowerLetter){
	putchar(count1);
	count1++;
    }
    while(count2 <= lastUpperCase){
	putchar(count2);
	count2++;
    }
    putchar('\n');
    
    return (0);
}
