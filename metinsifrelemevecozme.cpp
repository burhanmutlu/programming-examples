#include<iostream>
using namespace std;
int main(){
	
	string a,b;
	cout<<"sifrelenecek metni giriniz:"<<endl;
		getline(cin,a);
			for(int i=0;i<a.size();i++){
				if(a[i]>=97&&a[i]<=122){
				int c=a[i]%26;
				a[i]=c+97;
				cout<<a[i];	
			}else{
				cout<<a[i];
			}
	}
	cout<<"\ncozulecek metni giriniz:"<<endl;
		getline(cin,b);
			for(int i=0;i<b.size();i++){
				if(b[i]>=97&&b[i]<=122){
					b[i]-=97;
					while(b[i]<97){
						b[i]+=26;
					}
					cout<<b[i];
			}else{
				cout<<b[i];
			}
	}
}
