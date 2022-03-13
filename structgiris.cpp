#include<iostream>
using namespace std;
struct student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
}mutlu,bos;
int main(){
	
	bos={0};
	student burhan={"burhan","mutlu",100,19};
	cout<<burhan.isim<<" "<<burhan.soyisim<<" "<<burhan.numara<<" "<<burhan.yas<<endl;
	mutlu=burhan;
	cout<<mutlu.isim<<" "<<mutlu.soyisim<<" "<<mutlu.numara<<" "<<mutlu.yas<<endl;
	cout<<bos.isim<<" "<<bos.soyisim<<" "<<bos.numara<<" "<<bos.yas;

}
