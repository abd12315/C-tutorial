#include <stdio.h>
int main()
{
    char name[45]; // 45 bytes memory
    int number1;
    int number2;//your code goes here
    printf("Please Enter the First Number:");
    scanf("%d",&number1);
    printf("Please Enter the Second Number:");
    scanf("%d",&number2);
    if (number1>number2)
    {
       printf("Number1 is the largest"); /* code */
    }
    else{
        printf("Number2 is the largest");
    }
    printf("\nOh my god I'm so happy I made my first ever input program LOL");
    printf("\nCan I have your name young warrior and whom do you represent really: ");
    scanf("%s",&name);
    printf("\nAnd your Name is:%s\tThank you for having us today sir :)",name);
    return 0;

}