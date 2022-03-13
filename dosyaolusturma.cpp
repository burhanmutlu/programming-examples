#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream f("neslii.txt");
	if(f.is_open()){
		f<<"<nesli> çok zeki maşAllah."<<endl;
	}
	f.close();
}
