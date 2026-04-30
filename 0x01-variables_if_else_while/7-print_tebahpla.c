 /**
 * Author: Your Full Name
 * Program: WinMingle Community C Training
 * Description: a program that prints the lowercase alphabet in reverse order.
*/

#include <stdio.h>

int main(){

    int firstLowerCase = 'a';
    int lastLowerCase = 'z';
    int count = lastLowerCase;

    while(count >= firstLowerCase){
        putchar(count);
        count--;
	}
        putchar('\n');
    
    return(0);

}
