#include<iostream>
using namespace std;

struct araba{
	int tekerleksayisi;
	float motor;
	int beygir;
	int model;
}audi,honda;

int main(){
	
	cout<<"verileri giriniz:"<<endl;
	cin>>honda.tekerleksayisi>>honda.motor>>honda.beygir>>honda.model;
	audi=honda;
	cout<<audi.tekerleksayisi<<" "<<audi.motor<<" "<<audi.beygir<<" "<<audi.model;

}
