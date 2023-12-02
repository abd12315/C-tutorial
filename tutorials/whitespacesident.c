#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    printf("Please enter the text you want to be displayed: ");
    //this program will allow whitespaces within the program
    fgets(name, 25, stdin);
    // fgets involve name of the variable not the address the size of the specified variable and the type or nature of the expected variable
    printf("Hi how are ya %s",name);
    return 0;
}