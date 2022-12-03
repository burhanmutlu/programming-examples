#ifndef calisan_h
#define calisan_h
#include "insan.h"

class Calisan : public insan {
	private:
		int maas;
	public:
		Calisan();
		void setMaas(int maas);
		int getMaas();
		void YemekYe(double kalori);
};

#endif
