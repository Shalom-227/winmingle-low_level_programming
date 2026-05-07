#include "main.h"
#include <unistd.h>

int _putchar(char a){
    /* a is a parameter */
    return (write(1, &a, 1));

}
