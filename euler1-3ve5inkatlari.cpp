#include <iostream>
using namespace std;
int main()
{
	int tp=0;
	for(int i=0; i<1000; i++){
		if(i%3==0 || i%5==0){
			tp += i;
		}
	}
	cout << tp;
}
