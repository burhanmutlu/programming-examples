#include<iostream>//girilen sayiya kadar fibonacci
using namespace std;
int main(){
	
	int n,ilk=0,ikinci=1,yeni;
	cout<<"n sayisini girin:";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<ilk<<", ";
			continue;
		}
		else if(i==1){
			cout<<ikinci<<", ";
			continue;
		}
		else{
			yeni=ilk+ikinci;
			ilk=ikinci;
			ikinci=yeni;
			cout<<yeni<<", ";
		}
	}
	
}
