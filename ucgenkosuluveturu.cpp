#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c;
	label:
		cout<<"kenar uzunluklarini giriniz:"<<endl;
		cin>>a>>b>>c;
		
			bool ch1=abs(b-c)<a&&a<(b+c);
			bool ch2=abs(b-a)<c&&a<(b+a);
			bool ch3=abs(a-c)<b&&a<(a+c);
			
	if(ch1||ch2||ch3){
		if((pow(a,2)+pow(b,2)==pow(c,2))||(pow(a,2)+pow(c,2)==pow(b,2))||
		(pow(c,2)+pow(b,2)==pow(a,2))){
			
			cout<<"bu bir dik ucgendir"<<endl;
		}
		else if((b==c)&&(a==c)){
			cout<<"bu bir eskenar ucgendir"<<endl;
		}
		else if((a==b&&b!=c)&&(a==c&&c!=b)&&(b==c&&b!=a)){
			cout<<"bu bir ikizkenar ucgendir"<<endl;
		}
		else{
			cout<<"bu bir cesitkenar ucgendir"<<endl;
		}}
		else{
			cout<<"ucgen kosulunu saglamaz"<<endl;
		}
		goto label;
	}

		
