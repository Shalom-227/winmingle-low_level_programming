/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: a program that prints the alphabet in lowercase except letters q and e, followed by a new line
 */


#include <stdio.h>

int main(){


    int firstLowerCase = 'a';
    int lastLowerCase = 'z';
    int count = firstLowerCase;

    while(count <= lastLowerCase){
        
        if (count != 'e' && count != 'q'){
            putchar(count);
	}
	count++;
    }
    putchar('\n');
    
    return (0);
}	    
