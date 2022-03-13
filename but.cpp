#include <iostream>
#include<cmath>
#define PI 3.14
#define e 2.71
using namespace std;
int tursayisi(float r,float t){
	
float A = 0.1,ty= 0.0, mc=2*PI*r, w,c,v;  
        w = r * pow(e,-(0.02)*t);
        t += A;
        v=w*r;
        ty += w * A; 
        c= ty/mc;
    cout<<"makara tur sayisi: " << c<< endl;
}

int main(){
		
		float r=5.0,t=0.0;
		tursayisi(r,t);
    
}
