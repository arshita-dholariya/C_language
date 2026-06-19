/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int options;
    char *item = " ";
    int add;
    int value;
    int subop;
    int Total_Bill;
    int count;
    
    printf("Welcome To Food Menu. \n");
    
    // choose food options
    
    printf("Choose Food Options. \n");
    printf("  1. Fast Food \n  2. Thali \n  3. South Indian \n  4. North Indian \n");
    printf("Enter Food Options: ");
    scanf("%d",&options);
    
    switch(options){
        case 1:
        {
            printf("Welcome To The Fast Food Menu \n");
            printf(" 1. Crispy Veg. Burge:   _________59  \n 2. Regular Fries:       _________53  \n 3. Veg Pizza Puff:      _________93  \n 4. Crunchy Taco:        _________75  \n 5. Veg Momos:           _________59  \n 6. Potato Cheez Balls:  _________85  \n");
            
            printf("Enter Item Numbers: ");
            scanf("%d",&subop);
            
            if(subop == 1){ item = "Crispy Veg. Burge"; value = 59; }
            else if(subop == 2){ item = "Regular Fries"; value = 53; }
            else if(subop == 3){ item = "Veg Pizza Puff"; value = 93; }
            else if(subop == 4){ item = "Crunchy Taco"; value = 75; }
            else if(subop == 5){ item = "Veg Momos"; value = 59; }
            else if(subop == 6){ item = "Potato Cheez Balls"; value = 85; }
            else{ printf("not food options"); }
            
            printf("Add Item: ");
            scanf("%d",&count);
            
            Total_Bill = value * count;
            printf("%s is %d\n",item,Total_Bill);
               
            printf("Thank You!");
            
            break;
        }
        
        case 2:
        {
            printf("Welcome To The Thali Menu \n");
            printf(" 1. Regular Thali: _________150  \n 2. Medium Thali:  _________120  \n 3. Jain Thali:    _________130 \n");
            printf("Enter Item Numbers: ");
            scanf("%d",&subop);
            
            if(subop == 1){ item = "Regular Thali"; value = 150; }
            else if(subop == 2){ item = "Medium Thali"; value = 120; }
            else if(subop == 3){ item = "Jain Thali"; value = 130; }
            else{ printf("not food options"); }
            
            printf("Add Item: ");
            scanf("%d",&count);
            
            Total_Bill = value * count;
            printf("%s is %d\n",item,Total_Bill);
            
            printf("Thank You!");
            
            break;
        }
        
        case 3:
        {
            printf("Welcome To The South Indian Menu \n");
            printf(" 1. Idli:         _________92  \n 2. Dosa:         _________160  \n 3. Medu Vada:    _________160  \n 4. Pongal Upma:  _________160 \n");
            printf("Enter Item Numbers: ");
            scanf("%d",&subop);
            
            if(subop == 1){ item = "Idli"; value = 92; }
            else if(subop == 2){ item = "Dosa"; value = 160; }
            else if(subop == 3){ item = "Medu Vada"; value = 160; }
            else if(subop == 4){ item = "Pongal Upma"; value = 160; }
            else{ printf("not food options"); }
            
            printf("Add Item: ");
            scanf("%d",&count);
            
            Total_Bill = value * count;
            printf("%s is %d\n",item,Total_Bill);
            
            printf("Thank You!");

            break;
        } 
        
        case 4:
        {
            printf("Welcome To The North Indian Menu \n");
            printf(" 1. Paratha:       _________120  \n 2. Dal Makhani:   _________180  \n 3. Paneer Tikka:  _________180  \n 4. Chole Bhature: _________200 \n");
            printf("Enter Item Numbers: ");
            scanf("%d",&subop);
            
            if(subop == 1){ item = "Paratha"; value = 120; }
            else if(subop == 2){ item = "Dal Makhani"; value = 180; }
            else if(subop == 3){ item = "Paneer Tikka"; value = 180; }
            else if(subop == 4){ item = "Chole Bhature"; value = 200; }
            else{ printf("not food options"); }
            
            printf("Add Item: ");
            scanf("%d",&count);
            
            Total_Bill = value * count;
            printf("%s is %d\n",item,Total_Bill);
            
            printf("Thank You!");
            
            break;
        }
    }
    
}