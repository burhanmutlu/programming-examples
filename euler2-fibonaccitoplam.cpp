#include <iostream>
using namespace std;
int main()
{// 1 2 3 5 8 
	int ilk=1, iki=2, tp=2;
	while(iki<4000000){
		int temp = iki;
		iki += ilk;
		ilk = temp;
		if(iki%2==0){
			tp +=iki;
		}
		
	}
	cout << tp;
}
