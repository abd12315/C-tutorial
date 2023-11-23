#include <stdio.h>
#include <string.h>
int main(int argc, const char* argv[])
{
    if(argc!=4){
        printf("Usage: %s <String1> <String2>",argv[0]);
        return 1;
    }
    char input[15];
    char response[]="Yes who's this?";
    char greetings[30];
    printf("Enter your greetings here:%s ",greetings[30]);
    scanf("%s",input);    
    if (strcmp(input,"Hello")==0)
    {
        printf("%s\n",response);    /* code */
    }
    else{
        printf("Sorry could you repeat that for me");
    }    
// code is still underconstruction we are going to modify this later on?
}