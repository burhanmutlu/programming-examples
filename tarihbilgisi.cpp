#include<iostream>
#include<ctime>
using namespace std;
int main(){
	
	time_t tarih=time(NULL);
		cout<<ctime(&tarih);
}
