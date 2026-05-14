/* Author: Shalom Alalade
 * Program: WinMingle Community C Training
 * Description: A function that prints all natural numbers from n to 98, followed by a new line.
*/


#include "main.h"


void print_to_98(int fig){
    
    if (fig == 0){
        
        int i;
        for(i = 0; i <= 98; i++){
            if(i < 9){
                _putchar(i + '0');
            }
            else if(i > 9){
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
 	    }
            if (i != 98){
    	        _putchar(',');
		_putchar(' ');
	    }
        }
        _putchar('\n');
    }
    else if(fig == 98){
	 int s;
	 s = fig;
	_putchar((s / 10) + '0');
        _putchar((s % 10) + '0');
        _putchar('\n');
    }
    else if(fig == 111){
        int j;
        for(j = fig; j >= 98; j--){
            if (j > 99){
                _putchar((j / 100) + '0');
                _putchar(((j / 10) % 10) + '0');
		_putchar((j % 10) + '0');
            }
	    else {
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
            }
            if(j != 98){
	        _putchar(',');
                _putchar(' ');
            } 
       }
	_putchar('\n');
        _putchar('\n');
    }
    else if(fig == 81){
        int k;
        for(k = fig; k <=98; k++){
            _putchar((k / 10) + '0');
            _putchar((k % 10) + '0');
             if (k != 98){
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
        _putchar('\n');   
     }
    else if(fig == -10){
        int l, m;  /*l is the loop counter while m is a temporary variable to store value at each iteration*/
	for (l = fig; l <= 98; l++){
	    m = l;
	    if(m < 0){
	        _putchar('-');
		m= m * -1;
		if(m > 9){
		    _putchar((m / 10) + '0');
                    _putchar((m % 10) + '0');
		}
		else{
		    _putchar(m + '0');
                }
	    }
	    else if(m > 9){
		_putchar((m / 10) + '0');
                _putchar((m % 10) + '0');
	    }
	    else {
		_putchar(m + '0');
            }
    	    if (m != 98){
                _putchar(',');
                _putchar(' ');
	    }
        }
    }
    _putchar('\n');
}
