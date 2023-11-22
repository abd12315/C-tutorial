#include <stdio.h>
#include <stdbool.h>
int main()
{
    float Celcius;//let's take 3 variables at first
    int min,max;
    float Farenhient;
    Farenhient=76.6; // I used unsigned enable to include negative numbers
    Celcius=(5*Farenhient-160)/9; //the formula
    printf("The value of Farenheit before Calculation is:%3.1f\n",Farenhient);
    printf("The value of Celcius after intially taking Farenheint is:%2.2f",Celcius); 
    max=100;
    char choice[30];
    bool choice1 = true; // if user want to do this again
    bool choice2 = false; // if user don't wanna do this again soo
    if(Celcius>=max) {
        printf("\nOut of Bound Value%2.2f",Celcius);
    }
//Program is still underconstruction get back once it's done
return 0;
}