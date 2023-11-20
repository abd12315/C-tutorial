#include <stdio.h>
#include <stdlib.h>
int main()
{
  //let's start with the simple character data type shall we it only takes one single character
  char abc='A';
  printf("%c\n",abc);
  // this one was simple interpretation of character one now let's take a look how this one is going to be helpful while utilizing scanf input function
  char abc2[20]="Pakistan";
  printf("this is multiple value based character:%s",abc2);
  // this is a multiple array based variable can be used to store multiple characters since it doesn't string type data type
  // if more than one character is available that is
  // see the output for yourself
  return 0;
}
