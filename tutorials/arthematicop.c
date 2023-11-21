#include <stdio.h>
int main()
{
    /*time to do some arthematic caluclations
    
    + represents addition
    / represents division
    * multiplication
    ++ increment operator
    --decrement operator
    % modulas operator 
    let's take an example over here
    */
    int x=32;int y=27;
    int z=x-y;
    printf("The value of x:%d\n",x);
    printf("The value of y:%d\n",y);
    printf("The value of z(After calculations):%d\n",z);
    // let's do all of the operation at once
    int w=x+y;
    printf("The value of x:%d\n",x);
    printf("The value of y:%d\n",y);
    printf("The value of w(After calculations):%d\n",w);
    float v=x/y;
    printf("The value of x:%d\n",x);
    printf("The value of y:%d\n",y);
    printf("The value of v(After calculations):%.1f\n",v);
    int u=x*y;
    printf("The value of x:%d\n",x);
    printf("The value of y:%d\n",y);
    printf("The value of u(After calculations):%d\n",u);
    float t=x%y;
    printf("The value of x:%d\n",x);
    printf("The value of y:%d\n",y);
    printf("The value of t(After calculations):%.1lf\n",t);
    int d=x++;
    printf("The value of d(After calculations a.k.a incrementor):%d\n",d);
    int e=y++;
    printf("The value of e (After caluclations a.k.a incrementor):%d\n",e);
    int f=x--;
    printf("The value of f(After decrementor):%d\n",f);
    int g=y--;
    printf("The value of g(After decrementor operator):%d\n",g);
    return 0;
}