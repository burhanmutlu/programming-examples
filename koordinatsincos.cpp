#include <iostream>
#include <cmath>
#include <conio.h>
#include <Windows.h>
#include <unistd.h>
#define pi 3.14159265
using namespace std;
int main()
{
	for(int i=0; i<=360; i++){
		float derece=i*pi/180; 
		if(i%30 == 0){
		cout << i << ". " << cos(derece) <<
				 "	" << sin(derece) << endl;
		}
		sleep(0.1);
	}
}
