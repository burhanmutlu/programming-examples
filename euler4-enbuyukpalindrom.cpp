#include <iostream>
using namespace std;

bool palindrom(int a)
{// 2000
	int kalan[200], tp=0;
	for(int i=0; a!=0; i++){
		kalan[i] = a%10;
		a /= 10;
		tp++;
	}
	for(int i=0; i <= tp/2-1; i++){
		if(kalan[i] != kalan[tp-i-1]){
			return false;
			break;
		}
	}
}
int main()
{
	int exit = 0, max=0;
	for(int i=999; i>99; i--){
		for(int j=999; j>99; j--){
			if(palindrom(i*j) && i*j> max){
				max = i*j;
			}
		}
	}
	cout << max;
}
