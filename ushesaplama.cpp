#include<iostream>//üs hesaplama
using namespace std;
int main(){
	
	float taban,us,tp=1;
	cout<<"taban ve ussu giriniz:"<<endl;
	cin>>taban>>us;
	int temp=us;
	for(;us!=0;){
		tp*=taban;
		us--;
	}
	cout<<taban<<"^"<<temp<<": "<<tp;
}
