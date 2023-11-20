#include <stdio.h>
#include <stdbool.h>
int main()
{
    /* this program mainly focuses on representing each type and kind of data type
    respectfully please bear with the explanation for a while*/
    char a='C'; // char can be refrenced or represented in a program by %c sign
    char b[]="Fable"; //however in case of string we'll use %s sign
    float c= 3.1491759845943935345; // use store float number consist of size of 4bytes (32bit) base number represented by %f
    int j=31456; //only use to store integer type numbers consist of 4 bytes of memory represented by %d or referenced 
    // the range of this number ranges from (-2,147,423,628 to +2,147,423,628)
    // Now let's talk about double have more precision than float
    double d=3.14586786743895834957834; //8 bytes of data (64bit) character to be specific has 15-16 decimal places limit
    //let's represent float and double
    printf("%0.15f\n",c); //this is a floating point number
    printf("%0.17lf\n",d); //for more precision based floating point number
    // I'll create a dummy code name as datatypdummy that'll furthur explain the difference between the original file 
    //see the old file and compare this to this new one the only difference will be this line of code
    // printf("%f\n",c);
    // printf("%lf\n",d);
    // the only difference would be these lines
    // now to modify the code for better precision
    // the statement %0.15f will increase precision up to 15 decimal places
    // the statement %0.17lf will put precise and also increase precision up to 17 decimal places
    // now let's talk about booleans and the way we are actually going to use them
    bool g = true; // 1 for true or 0 false it uses 1 byte of memory and can be represented by %d
    printf("%d This is a Boolean Statement\n",g);
    printf("1 corresponds to true while 0 corresponds to False");
    printf("the output before modification beta 0.2");
    return 0; 

}