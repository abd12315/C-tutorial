#include <stdio.h>
int main()
{
    /*let's study about the format specifers ASAP
    Cause I want my revenege and my survival plan
    in motion If I don't I might go insane*/
    /*Format specifier can be specified using % sign to be exact 
    Following are the most commonly used specifier
    %d for decimals or %i for integers
    %c for characters %s for strings
    %f for float %lf for more precise float
    Now for special character representator specifier

    %.1 for decimal precision
    %1 for minimum feild length
    %- left align
    */
// your program goes here
int apples=250;
int bananas=70;
int Pineapple=44;
float cigrattes=25.25;
float energydrink=100.99;

printf("Before: Apple:PKR%d\n",apples);
printf("Before: Bananas:PKR%d\n",bananas);
printf("Before: Pineapple:PKR%d\n",Pineapple);
printf("Before: Cigrattes:PKR%.2f\n",cigrattes);
printf("Before: Energydrink:PKR%.1lf",energydrink);
printf("\nNow observe how the output will change after adding space width specifier...\n");
// adding space width specifier now
//let's say I wanna add three spaces to each price item consectively observe
printf("After: Apple:PKR%4d\n",apples);
printf("After: Bananas:PKR%4d\n",bananas);
printf("After: Pineapple:PKR%4d\n",Pineapple);
printf("After: Cigrattes:PKR%4.2f\n",cigrattes);
printf("After: Energydrink:PKR%4.1lf",energydrink);
return 0;
}