/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float per;
    printf("enter the percentage: ");
    scanf("%f",&per);
    
    if(per >= 90){
        printf("Grade A+\nExcellent");
    }
        
        else if(per >= 80){
            printf("Grade A \nVery Good");
        }
        else if(per >= 70){
            printf("Grade B+ \nGood");
        }
        else if(per >= 60){
            printf("Grade C \nAvarage");
        }
        else if(per >= 50){
            printf("Grade D \nLow");
        }
        else if(per >= 40){
            printf("Pass");
        }
        
    
    else{
        printf("Grade F \nFail ");
    }
    
}
