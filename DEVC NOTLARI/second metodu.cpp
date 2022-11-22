#include<stdio.h>
float f(float x){
	return exp(-0.5*x)-x-0.2;
}

int main()
{
    float a,b,c,d,e;
    int count=1,n;

    a=0;
    b=2;
   
    e = 5*pow(10,-3);
    n=
    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
        return;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        printf("Iteration No-%d    x=%f\n",count,c);
        count++;
        if(count==n)
        {
        break;
        }
    } while(fabs(f(c))>e);
    printf("\n The required solution is %f\n",c);

}
