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
    bool h = false; // this will give us a false output
    printf("%d This is a Boolean Statement\n",g);
    printf("%d A false Statement Of course\n",h);
    printf("1 corresponds to true while 0 corresponds to False");
    printf("the output before modification beta 0.2");
    // please note we can use integer in the character type variable and I repeat we can use integer for our benefit like 
    // well how's this possible it's simple create or declare a character type variable 
    char ab=100; //Now another thing to keep in mind this character type variable has it's own set of range 
    // approximately (-128to+127) you can use either %d or %c represent character
    printf("\n%d\n",ab); //let's see if this one works LOL
    // now let's print this number as a character that'll give us entirely different ouptut from the orignial inteneded output
    // it'll gave output like this if used %c 
    printf("%c\n",ab); //see for yourself
    printf("the above text is ASCII equivilant if a number is represented as an character");
    unsigned char bb =44; // to display an unsigned character we will use 1 byte of memory 0 to 255 only we will use %d or %c only remember that 
    printf("\n%c",bb);
    //watch what happens if I increase the range
    unsigned char bc=255; //in my case it just showed up the ? mark how odd
    printf("\n%c",bc); //so here's the thing unsigned char actually doubles the ASCII expected range from 127 to 256 or 255 to be specific
    // let's talk about short int what does it do it stores 
    // data ranges from (-32,678 to +32767) represented by %d
    short int bd=32767; //I'm choosing the maximum range lol
    printf("\n%d",bd); //let's see what kind of magic we can expect lol
    unsigned short int be=65355; //if it's unsigned short int the range is (0 to +65,535) represented by %d
    printf("\n%d",be); // like typical unsigned it doubles the range of a given variable
    unsigned int bf=43898; //store numbers ranging from (0 to 4 billion)
    printf("\n%d",bf); //see easy peasy lemon sequezy
    // so I got the warning message before intializing the commit and it's discomforting to say the least
    // ok here comes the big guy
    long long int deaf=2982974892734729; // 8 bytes in the memory ranges from (-9 quintillion to +9 quintillion) represented by %lld
    unsigned long long  int deas=2903432904823903984U; // 8 bytes in the memory ranges from (0 to +18 quintillion) represented by %llu
    printf("\n%lld",deaf);
    printf("\n%llu",deas); // I'm genuinly astounded by the response no shit sherlock lol
    // ok now it's fix lol I was using wrong representator or type string lol
    // if the number is incredibly long more than +18 quintillion you can use U at the end to prevent the warning since it take 8 bytes in the memory which is incredibly long
    return 0; 

}