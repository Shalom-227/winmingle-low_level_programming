/**
 * Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that checks alphabetic characters
*/


#include "main.h"


int _isalpha(int checkV){
    
    int firstLower = 'a';
    int firstUpper = 'A';

    while(firstLower <= 'z' && firstUpper <= 'Z'){
        
        if (checkV == firstLower || checkV == firstUpper){
            return 1;
        }
        firstLower++;
        firstUpper++;
    }
    return 0;
}
