#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream f("1-100arasiciftsayi.txt");
	for(int i=0;i<100;i++){
		if(i%2==0){
			if(f.is_open()){
		f<<i<<endl;
	}
		}
	}
	f.close();
	
	
}
