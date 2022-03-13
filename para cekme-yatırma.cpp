#include <iostream>


using namespace std;

int main() {
	
	int x,bakiye=1000,tutar;
	
	cout<<"Ana Ekrana Hos Geldiniz.\n1.para cekme\n2.para yatirma\n3.kart iste"<<endl;
    cin>>x;
    switch(x){
	
	case 1 :
	cout<<"bakiyeniz:"<<bakiye<<endl;
	cout<<"cekilecek tutari giriniz:\n";
	cin>>tutar;
	if (tutar>bakiye) cout<<"bakiyeniz yetersiz.\n";
	else{
	bakiye=bakiye-tutar;
	cout<<"bakiyeniz:"<<bakiye<<endl;}
    break;
    case 2 :
    
    cout<<"bakiyeniz:"<<bakiye<<endl;
	cout<<"yatirilacak tutari giriniz:\n";
	cin>>tutar;
	bakiye=bakiye+tutar;
	cout<<"bakiyeniz:"<<bakiye<<endl;
    break;
	
	case 3 :
	
	cout<<"iyi gunler...";
	break;
	
	
	}

}

