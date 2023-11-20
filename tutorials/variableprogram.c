#include <stdio.h>
int main()
{
    // trying out first ever variable programs
   char name; //character type data type
   name='K'; //this is a character type variable
   int age=22; // this is an integer number variable
   float gpa=3.54; //float type variable
   char grade='A'; //single character type
   /*remember string is an object and since C is a procedural language it doesn't support
    objective C*/
    char sus[]="You're quite a suspicious person";     // Now for array type data it can support more than one character type data
    printf("you're name is: %s\n",sus);
    printf("Wait hold on something wrong that ain't your name btw your age is:%d\n",age);
    printf("your gpa is:%.2f\n",gpa);
    printf("your grades are:%c",grade);
    return 0;
                    
}