#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float f(float x)
{
    float z;
    z=pow(x,3)-2*x-5;
    return z;

}

int main()
{
    float x1,x2,x0,err=0.001;
    int i;
    printf("enter the first guess");
    scanf("%f",&x1);
    printf("enter the second guess");
    scanf("%f",&x2);
    if(f(x1)*f(x2)>0)
    {
        printf("invalid guess...terminating...");
        exit(0);
    }
    i=1;
    printf("\n itr \t x1\t\tx2\t\tx0\n");
    do{
        x0=(x1+x2)/2.0;
        printf("%d\t%f\t%f\t%f\n",i,x1,x2,x0);
        if(f(x1)*f(x0)>0)
        {
            x1=x0;

        }
        else{
            x2=x0;

        }

        i++;
    }while(fabs(f(x0))>err);
    printf("the root is %f",x0);
    return 0;
    
}