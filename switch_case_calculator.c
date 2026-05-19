/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int option;
    int a,b;
    int Number;
    
    
    
    printf("Enter First Value:  ");
    scanf("%d",&a);
    printf("Enter Second Value:  ");
    scanf("%d",&b);
    
    
    printf("Which Option Are Select: \n");
    scanf("%d",&option);
    
    switch(option){
        case 1:
        {
            Number = a + b;    
            printf("add: %d\n", Number);
            break;
        }
        
        case 2:
        {
            printf("sub: %d\n", Number = a - b);
            break;
        }
        
        case 3:
        {
            printf("mul: %d\n", Number = a * b);
            break;
        }
        
        case 4:
        {
            printf("div: %d\n", Number = a / b);
            break;
        }
        
        case 5:
        {
            printf("mod: %d\n", Number = a % b);
            break;
        }
        
        
        case 6:
        {
            printf("Done");
            break;
        }
    }

    return 0;
}
