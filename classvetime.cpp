#include <iostream>
#include <time.h>
using namespace std;
class saat {
	public:
		time_t sa;
		time_t dakika;
		time_t saniye;
		saat(time_t, time_t, time_t);
};

saat::saat(time_t a, time_t b, time_t c){
	time_t tarih;
	struct tm * t = localtime(&tarih);
	a = 
	
	
}

int main() {
	
	time_t a,b,c;
	saat obj(a,b,c);

	
	
	
}
