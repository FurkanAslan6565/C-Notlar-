#include<stdio.h>
float f(float x)
{
    return(x*x*x-4); // f(x)= x^3-4
}
int main()
{
    float a,b,c,d,e;
    int count=1,n;
    printf("\n\na ve b'nin de�erlerini girin:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);
    
    printf("�zin verilen hata de�erlerini ve maksimum yineleme say�s�n� girin:\n");
    scanf("%f %d",&e,&n);
    do
    {
        if(f(a)==f(b))
        {
            printf("\nA ve b de�erleri ayn� oldu�u i�in ��z�m bulunam�yor.\n");
        
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        printf("Yineleme No-%d    x=%f\n",count,c);
        count++;
        if(count==n)
        {
        break;
        }
    } 
	while((f(c)) > e);
    printf("\n Gerekli ��z�m %f\n",c);

}
