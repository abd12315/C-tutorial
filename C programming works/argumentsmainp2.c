#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    //your program goes here
if(argc!=5){
    printf("Usage: %s\n",argv[0]);
    return 1;
}   
printf("This is me practising about the arguments function nonetheless useful function in C program\n");
int English=atoi(argv[1]);
int Math=atoi(argv[2]);
int Chemistery=atoi(argv[3]);
int Computer=atoi(argv[4]);
float Average=(English+Math+Chemistery+Computer)/4;
printf("The average of English Math Chemistery Computer is:%4.2f",Average);
}