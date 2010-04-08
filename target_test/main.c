#include <p16f716.h>
 
void main(void)
{
    /* Set PORT D as digital outputs */
    PORTA = 0x00;
    TRISD = 0x00;
}