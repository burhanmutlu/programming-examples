#include <iostream>
#include <cmath>

using namespace std;

class isciler
{
	string ad, soyad;
	int saat_ucreti, calistigi_saat;
	double aylik_maas;
	
	public:
		void BilgiGir(){
			cout << "iscinin adini gir:";
			cin >> ad;
			
			cout << "iscinin soyadini gir:";
			cin >> soyad;
			
			cout << "iscinin 1 saatte aldigi ucret:";
			cin >> saat_ucreti;
			
			cout << "isci, 1 ayda kac saat calisti?";
			cin >> calistigi_saat;		
		}
		
		double Maas(){
			return aylik_maas= saat_ucreti*calistigi_saat;
		}
		
		void Goster(){
			cout << "iscinin adi: " << ad << endl;
			cout << "iscinin soyadi: " << soyad << endl;
			cout << "iscinin maasi: " << Maas() << endl;
			yorum(Maas());
		}
		
		void yorum(double aylik_maas){
			if(aylik_maas > 800){
				cout << "maasi asgari ucretten yuksek." << endl;
			} else{
				cout << "maasi asgari ucretten dusuk." << endl;
			} 
		}
};
	

int main()
{
	isciler isci1, isci2;
	
	isci1.BilgiGir();
	cout << "------------\n";
	isci2.BilgiGir();
	cout << "------------\n";
	
	
	cout << "iscilerin bilgileri\n\n";
	isci1.Goster();
	isciler af;
	cout << "------------\n";
	isci2.Goster();
	system("pause");
	return 0;
	
}
