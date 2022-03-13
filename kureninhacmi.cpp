#include<iostream>//kürenin hacmini hesaplama
#include<cmath>
#define PI 3.14
using namespace std;
int main(){
	int yaricap;
	float hacim;
	cout<<"Kurenin Yaricapini Giriniz:"<<endl;
	cin>>yaricap;
	hacim=(4/3.0)*PI*pow(yaricap,3);
	cout<<"Kurenin Hacmi: "<<hacim<<"'dir"<<endl;
}
