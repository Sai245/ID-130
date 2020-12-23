/**************************************
* Author :Perisetti Sai Ram Mohan Rao *
* Implementation of C code to verify  *
* the result. Using table 1,kmaps POS,* 
* SOP.                                *
***************************************/

#include <stdio.h>

int main(void)
{
    unsigned char a=0x00,b=0x00,c=0x00;
    unsigned char M;

    M = (a ^ b ^ c) ;
    printf("M = %x\n",(M & 01));

}


