#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char* argv[])
{
    //your program goes here
    /*argc only tells us how many elemants are there in argv[]
    that's why it return 1 value by deafult
    as for what they stands for argc stands for argument count 
    And argv stands for argument vector
    here arguments are the CLI that you
    pass through the code or the program
    so whenever you run this it populates the array with the arguments
    which you can pass during execution*/
if (argc!=4){
    printf("Usage:%s <number1> <number2> <number3>\n",argv[0]);
    return 1;
}
int number1=atol(argv[1]);
int number2=atol(argv[2]);
int number3=atol(argv[3]);
if (number1>number2 && number1>number3)
{
   printf("The number 1 is largest"); /* code */
}
else if (number2>number1&&number2>number3)
{
   printf("The number 2 is the largest"); /* code */
}
else if (number3>number1 && number3>number2)
{
    printf("Number 3 is the largest");/* code */
}
// end program
}