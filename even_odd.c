/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Number;
    
    printf("Enter Number: ");
    scanf("%d",&Number);
    
    if(Number % 2){
        printf("Odd");
    }
    
    else{
        printf("Even");
    }
    
}
