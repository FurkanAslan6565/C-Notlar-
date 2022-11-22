#include <iostream>
#include <math.h>

using namespace std;

float Hesapla (int Katsayi_derece[4][2],float gecici){
	float sonucFonk = 0;
	
	for(int i=0;i<4;i++){
		
		sonucFonk += Katsayi_derece[i][0] * pow(gecici,Katsayi_derece[i][1]);
	}
	return sonucFonk;
}
float TurevHesap(int Katsayi_derece[4][2],float gecici){
	
	float sonucTurev1 = 0;
	
	for(int i=0;i<4;i++){
		sonucTurev1 += Katsayi_derece[i][0] * Katsayi_derece[i][1] * pow(gecici,Katsayi_derece[i][1]-1);
	
	}
		cout <<"1. Turev sonucu : "<<sonucTurev1<<endl;
	
	return sonucTurev1;
	}
	main(){
	
	int Katsayi_derece[4][2],i,x,sagdan_L_R[3],soldan_L_R[3],sagdan_T_R[3],soldan_T_R[3];
	float sagdan_L[3],soldan_L[3],sagdan_T[3],soldan_T[3],gecici,sonuc,sonuc_T;

	
	for(i=0;i<4;i++){
		cout <<"Fonksiyon icin " <<i<<" . terim katsayisini ve derecesini giriniz ->";
		cin >>Katsayi_derece[i][0] >> Katsayi_derece[i][1];
	}
		cout <<"Degerini hesaplamak icin bir x sayisi giriniz -> ";
	cin>>x;
		cout<<"Fonksiyon : ";
	for(int i=0;i<4;i++){
		cout << Katsayi_derece[i][0]<<"x^"<<Katsayi_derece[i][1];
		if(i==3) continue;
		cout<<"+";	
	}
	cout<<endl;
	
	gecici= x +0.020;
	sagdan_L[0] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << sagdan_L[0]<<endl;
	
	gecici= x +0.015;
	sagdan_L[1] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << sagdan_L[1]<<endl;
	
	gecici= x +0.015;
	sagdan_L[2] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << sagdan_L[2]<<endl;
	
	gecici= x -0.020;
	soldan_L[0] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << soldan_L[0]<<endl;
	
	gecici= x -0.015;
	soldan_L[1] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << soldan_L[1]<<endl;
	
	gecici= x -0.0010;
	soldan_L[2] = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << soldan_L[2]<<endl;
	
	gecici = x;
	sonuc = Hesapla(Katsayi_derece,gecici);
	cout<<"Dizi Eleman: " << sonuc<<endl;
	
	
	soldan_L_R[0] = round(soldan_L[0]);
	
	soldan_L_R[1] = round(soldan_L[1]);
	
	soldan_L_R[2] = round(soldan_L[2]);
	
	sagdan_L_R[0] = round(sagdan_L[0]);
	
	sagdan_L_R[1] = round(sagdan_L[1]);
	
	sagdan_L_R[2] = round(sagdan_L[2]);
	
	if(soldan_L_R[2] == sonuc && sagdan_L_R[2] == sonuc && sagdan_L_R[2] == soldan_L_R[2]){
		
		cout<<"Sureklidir."<<endl;

	
		gecici= x +0.020;
		sagdan_T[0] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << sagdan_T[0]<<endl;
	
		gecici= x +0.015;
		sagdan_T[1] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << sagdan_T[1]<<endl;
	
		gecici= x +0.015;
		sagdan_T[2] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << sagdan_T[2]<<endl;
	
		gecici= x -0.020;
		soldan_T[0] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << soldan_T[0]<<endl;
	
		gecici= x -0.015;
		soldan_T[1] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << soldan_T[1]<<endl;
	
		gecici= x -0.015;
		soldan_T[2] = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << soldan_T[2]<<endl;
	
		gecici = x;
		sonuc_T = TurevHesap(Katsayi_derece,gecici);
		cout<<"Dizi Eleman: " << sonuc_T<<endl;
	
	
		soldan_T_R[0] = round(soldan_T[0]);
		
		soldan_T_R[1] = round(soldan_T[1]);
		
		soldan_T_R[2] = round(soldan_T[2]);
		
		sagdan_T_R[0] = round(sagdan_T[0]);
		
		sagdan_T_R[1] = round(sagdan_T[1]);
		
		sagdan_T_R[2] = round(sagdan_T[2]);
		
	
		if(sagdan_T_R[2] == soldan_T_R[2]){
		
		cout<<"Turevlenebilir.";
		}
		else{
		cout<<"Turevlenemez.";
		}
	}
	else{
		cout<<"Sureksizdir. O yuzden turevlenemez.";
	}
}
	
