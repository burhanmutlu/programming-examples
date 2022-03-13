#include<iostream>//adres kullanarak deger degistirme
using namespace std;
void degerdonustur(int *,int *,int *);

int main(){
	
	int a,b,c;
	cout<<"3 sayi giriniz:";
	cin>>a>>b>>c;
	cout<<"ilk adresler ve degerler:"<<endl;
	cout<<endl<<&a<<"	"<<a<<endl;
	cout<<endl<<&b<<"	"<<b<<endl;
	cout<<endl<<&c<<"	"<<c<<endl;
	
	degerdonustur(&a,&b,&c);
	cout<<"fonksiyondan sonraki adresler ve degerler:"<<endl;
	cout<<endl<<&a<<"	"<<a<<endl;
	cout<<endl<<&b<<"	"<<b<<endl;
	cout<<endl<<&c<<"	"<<c<<endl;
	
}//x aslında a'nın adresidir. yani a'yı gösterir. *x ise a'nın değeri.


void degerdonustur(int *x,int *y,int *z){
	//sadece değer değişikliği yapıldığı için void fonk kullandık.
	
	cout<<"ilk pointer adresleri:"<<endl;
	cout<<endl<<&x<<"	"<<x<<"	"<<*x<<endl;
	cout<<endl<<&y<<"	"<<y<<"	"<<*y<<endl;
	cout<<endl<<&z<<"	"<<z<<"	"<<*z<<endl<<"-------------";
	
	int	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
	
	cout<<"son pointer adresleri:"<<endl;
	cout<<endl<<&x<<"	"<<x<<"	"<<*x<<endl;
	cout<<endl<<&y<<"	"<<y<<"	"<<*y<<endl;
	cout<<endl<<&z<<"	"<<z<<"	"<<*z<<endl<<"-------------";
}
