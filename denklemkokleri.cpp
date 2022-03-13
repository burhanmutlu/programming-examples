#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	float a,b,c,x1,x2,delta;
	cout<<"denklemin koklerini giriniz:"<<endl;
	cin>>a>>b>>c;
	delta=(b*b)-(4)*a*c;
	if(delta>0){
		x1=(-b-pow(delta,1/2.0))/2*a;
		x2=(-b+pow(delta,1/2.0))/2*a;
		cout<<"denklemin iki reel koku var."<<endl;
		cout<<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;
	}
	
	else if(delta==0){
		x1=(-b)/(2*a);
		cout<<"denklemin cakisik iki koku var."<<endl;
		cout<<"x1=x2= "<<x1;
	}
	
	 else{
	 	x1 = -b/(2*a);
        x2 =pow((-delta),1/2.0)/(2*a);
        cout<<"kokler karmasik ve farlidir."<<endl;
        cout<<"x1="<<x1<<"+"<<x2<< "i" <<endl;
        cout<<"x2="<<x1<<"-"<<x2<< "i" <<endl;
	 	
	 }
	
}
