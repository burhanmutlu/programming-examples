#include<iostream>
using namespace std;
int main(){
	
	int i=0,tp=0;
	string a;		
	cout<<"adinizi giriniz:";
	getline(cin,a);
	while(a[i]!='\0'){
		tp++;
		i++;
	}
	for(i=0; i<tp; i++){ 
	
        while(a[i]!=' '&&a[i]!='\0'&&i<tp){
            cout<<a[i];
        	i+=1;
        }
        cout<<endl;
				
		/*if(a[i]!=' '){
			cout<<a[i];
		}else{
			cout<<endl;
		}*/		
	}
}
