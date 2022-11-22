#include<iostream>
using namespace std;

	//5 16 8 4 2 1 
	// 13 20 10 5 16 8 4 2 1 
int Collatz(int x){
	if (x==1)
		return 1;
	else if(x%2==0)
		return Collatz(x/2);
	else
	 return Collatz(3*x+1);
}
	int main(){
		for(int i=1;i<25954454840;i++){
			cout<<i<<"\tCOLLATZ-->\t"<<Collatz(i)<<endl;
		}
	}
	

