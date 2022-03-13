#include<iostream>//call by referance 
#include<string.h>
using namespace std;

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

void degeral(struct ogrenci *p){
	strcpy(p->isim,"burhan");
	strcpy(p->soyisim,"mutlu");
	p->numara=120;
}

void goster(struct ogrenci *p){
	cout<<"ogrenci bilgileri: \n isim: "<<p->isim<<"\n soyisim: <"<<p->soyisim<<"\n numara: "<<p->numara;
}

int main(){
	
	struct ogrenci ogrenci1={"burhan","mutlu",500};
	
	degeral(&ogrenci1);
	cout<<ogrenci1.isim<<ogrenci1.soyisim<<ogrenci1.numara<<endl;
	
}
