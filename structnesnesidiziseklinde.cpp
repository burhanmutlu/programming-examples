#include<iostream>
using namespace std;
struct deger{
	float h,w;
}obj[2];

int main(){
	cin>>obj[0].h>>obj[0].w;
	cin>>obj[1].h>>obj[1].w;	
	cout<<obj[0].h+obj[1].h<<" "<<obj[0].w+obj[1].w;
}
