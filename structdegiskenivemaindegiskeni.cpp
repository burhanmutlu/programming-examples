#include<iostream>
using namespace std;
int main(){
	
	struct yap{
		int id;
		char cd;
	}yd;
	
	int id=21;
	yd.id=192;
	yd.cd='A';
	cout<<"main() fonksiyonu id degisken degeri: "<<id<<endl;
	cout<<"yap adli yapi icindeki id degisken degeri: "<<yd.id<<endl;
	cout<<"yap adli yapi icindeki cd degisken degeri: "<<yd.cd;
	
}
