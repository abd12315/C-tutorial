//the following program demonstrates the power of the read only file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salary=4353.4;
    const int employee=12;
    printf("Remember you you can change the salary but you can't change the Number of associated employees\n");
    printf("I hope I made myself clear now then\n");
    printf("Current Salary of each individual employee:%g\n",salary);
    printf("Total Number of working employees:%d\n",employee);
    printf("We thank you for your service guys!");
    return 0;
}
//this is the brief example of using constant to make permenanat changes in the programs ngl//
