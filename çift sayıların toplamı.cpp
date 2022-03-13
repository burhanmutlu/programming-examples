#include <iostream>

using namespace std;

int main(){
	
	int toplam=0, i;
	
	for (i=0; i<=10; i++){
		if(i%2==1) continue;
		toplam+=i;
	}
	cout<<"0 ile 10 arasi cift sayilarin toplami:"<<toplam;
	
	
}
