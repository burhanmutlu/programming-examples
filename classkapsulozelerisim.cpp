#include <iostream>
using namespace std;
class personel {
	private:
		int maas;
	public:
		void maasata(int m){
			maas = m;
		}
		int maasdon(){
			return maas;
		}
};

int main(){
	
	personel obj;
	obj.maasata(5000);
	cout << obj.maasdon();
	return 0;
	
}
/*
Neden Kapsülleme?
--> Sýnýf niteliklerinizi özel olarak (yapabildiðiniz sýklýkta) 
beyan etmeniz iyi bir uygulama olarak kabul edilir. Kapsülleme,
verilerinizin daha iyi kontrol edilmesini saðlar, çünkü siz 
(veya baþkalarý) diðer bölümleri etkilemeden kodun bir bölümünü
deðiþtirebilirsiniz.
--> Artan veri güvenliði
*/
