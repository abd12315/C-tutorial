#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
//argc is a integer that represents the number of command line arguments pass through program
// argv is pointer to an array of strings , where each string is one command line operator
// this program focused on converting strings to integer 
// also you need to handle errors for argc and argv some sort of intial argument must need to be set
if (argc!=3){
    printf("Usage: %s <num1> <num2>\n",argv[0]);
    return 1;
}

int num1=atoi(argv[1]); //atoi() is a function that can be used to convert String into integer
int num2=atoi(argv[2]); // you'll seen the result soon enough
int sum=num1+num2;
printf("The sum of %d and %d is: %d\n",num1,num2,sum); //after you done doing this now you need to do an important step 
}