#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int n;
  printf("n gir zirto : ");
  scanf("%d",&n);  //  1 
	int SahteDeger;
	int GercekDeger;
srand(time(NULL));   // 1 
SahteDeger = rand()%2; // 1  

	if(SahteDeger==0){
		GercekDeger=1; // 1 
	}
	else{
		GercekDeger=0; // 1 
	}
	
	n=pow(3,n); // 1
	
	int Paralar[n];
	
	int SahteIndis=rand()%n; // 1	
	int i;
	for(i=0;i<n;i++){ // 1 n+1 n 
		Paralar[i]=GercekDeger;  //n 
	}
	Paralar[SahteIndis]=SahteDeger; // n 
	
	int j;
	for(j=0;j<n;j++){  // 1 n+1 n 
	   if(Paralar[j]==Paralar[SahteIndis]){
	   	if(Paralar[j]>Paralar[j-1]){
         printf("Seni %d indixte buldum zirto gercekten hafifsin",j);
       }
       else{
         printf("Seni %d indixte buldum zirto gercekten Agirsin",j);

       }
	   }	
	}	
}
