#include<stdio.h>
// BAS�T B�R HESAP MAK�NASI YAPACA�IZ 

int main(){
	printf("*****Hesap Makinas�****\n");
	int  kosul;
	float s1,s2,sonuc; // BAS�T B�R HESAP MAK�NASI : )
	
	
	printf("Toplama icin 1 e Basiniz\n");
	printf("cikarma  icin 2 e Basiniz\n");
	printf("carpma icin 3 e Basiniz\n");
	printf("bolme icin 4 e Basiniz\n");
	scanf("%d",&kosul);
	
	printf("Say� 1 giriniz :");
	scanf("%f",&s1);	
	printf("Say� 2 giriniz :");
	scanf("%f",&s2);	
	
	switch (kosul){
		case 1 : 
		sonuc= s1+s2;
		printf("SONUC --> %f",sonuc);
		break ;
		case 2 : 
		sonuc= s1-s2;
		printf("SONUC --> %f",sonuc);
		break ;
		case 3 : 
		sonuc= s1*s2;
		printf("SONUC --> %f",sonuc);
		break ;
		case 4 : 
		if (s2==0){
			printf("Payda sifir olamaz!!!");
		}
		else {
			sonuc= s1/s2;
		printf("SONUC --> %f",sonuc);
		break ;
			
		}
		
	}
}

