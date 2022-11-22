#include<stdio.h>
//Matriste toplama iþlemi
int main(){
	
	int st1,st2;
	printf("Sutun sayisi giriniz:");
	scanf("%d",&st1);
	
	printf("Satir sayisi giriniz:");
	scanf("%d",&st2);
	
	int matris[st2][st1],matris2[st2][st1];
	
	//Kullanýcýdan deðer alacaz 
	printf("*****MATRIS 1 ICIN*****\n");
	int i,j;
	for (i=0;i<st2;i++){
		for(j=0;j<st1;j++){
			printf("Deger giriniz;");
			scanf("%d",&matris[i][j]);
		}
	}
		printf("*****MATRIS 2 ICIN*****\n");

	for (i=0;i<st2;i++){
		for(j=0;j<st1;j++){
			printf("Deger giriniz;");
			scanf("%d",&matris2[i][j]);
		}
	}
	//MATRÝS DEÐERLERÝNÝ EKRANA YAZDIRALIM
	printf("*****MATRIS 1 deðeri*****\n");
	for (i=0;i<st2;i++){
		for(j=0;j<st1;j++){
			
		printf("%d-",matris[i][j]);
		
}
printf("\n");
}
printf("*****MATRIS 2 deðeri*****\n");
for (i=0;i<st2;i++){
		for(j=0;j<st1;j++){
		printf("%d-",matris2[i][j]);
}
printf("\n");
}
 int toplam[st2][st1];
	//Matris toplam yap 
	
	 for (i =0 ;i<st2; i++){
	 	for(j=0;j<st1;j++){
	 		toplam[i][j] = matris[i][j]+matris2[i][j];
	 		
		 }
	 }	
		printf("***** SONUC*****\n");
		//Matris toplam yaz
  
	 for (i =0 ;i<st2; i++){
	 	for(j=0;j<st1;j++){
	 		printf("%d-",toplam[i][j] );
	 		
		 }
		 printf("\n");
	 }	
	
	
	
	
}
