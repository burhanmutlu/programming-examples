#include <iostream>
using namespace std;
int pisagor(int x, int y, int z)
{
	if((x*x)+(y*y) == z*z)
		return 1;
	else
	 	return 0;
}

int main()
{
	int i,j,k;
	for(i=0; i<j; i++){
		for(j=1; j<k; j++){
			for(k=2; k < 1000 ; k++){
				if(i+k+j == 1000 && pisagor(i,j,k)){
					cout <<(long int) i*j*k;
					break;
				}
			}
		}
	}
}
