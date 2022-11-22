#include <stdio.h>
int main()
{
int i, j;
    char dizi[6] = {'F','U','R','K','A','N'};
    for(i=0; i<6 ; ++i)
    {
        for(j=1; j<=i+1; ++j)
        {
            printf("%c ",dizi[j-1]);
        }
        
        	printf("\n");
		
    }

 for(i=7; i>=0; i--)
    {
        for(j=6; j>=i+1; j--)
        {
            printf("%c ",dizi[j-1]);
        }
        printf("\n");
    }   
    
    return 0;
}
