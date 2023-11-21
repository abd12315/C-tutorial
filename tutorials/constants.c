#include <stdio.h>
int main()
{
    /*constant= fixed value that cannot be altered by program 
    during it's execution*/
    printf("We are gonna learn about constants like rn\n");
    const float PI= 3.14159265;
    printf("For some reason this mf value won't change during program execution:%f ",PI);
    //PI = 432.44; //now even after referencing this it still won't work cause the above value is like fixed 
    // this is intial stage of the program now let's change the value after modification 
    // remove the comments and remove the const from float PI 
    // if we use this statement the statement instantly get's overwritten
    // to prevent this issue we'll use constant type variables
    // other than that it does have real life usuage
    return 0;

}