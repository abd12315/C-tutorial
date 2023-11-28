#include <stdio.h>
int main()
{
   char name[45];
   int age;
   printf("Enter your name:"); //in this program we are going to focus on none other than the legendart white spaces themselves
   fgets(name, 45, stdin); // you have to write the variable name space the given name specified of the variable and the nature of the data in my case it's input type so I'll use stdin type data 
   // we are going to use fgets function to utilized the legendary whitespaces themselves isn't it fun
   // scanf cannot read white spaces but fgets can and that alone is the reasonable enough to make this program worthy 
   // it has one demerit though it also includes spaces some extra spaces of the next line you get what I mean right now
   // we'll work tommorow internet is gone bye!
   return 0;
}