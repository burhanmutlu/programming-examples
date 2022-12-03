#ifndef insan_h
#define insan_h

class insan{
	protected:
		int yas, dogumYili;
		double kilo;
		char *ad, *soyad, *tcNo, *memleket;
		
	public:
		insan();
		insan(char* ad, char* soyad, char* tcNo, char* memleket, 
		int yas, int dogumYili, double kilo);
		int getYas();
		void setYas(int yas);
		int getDogumYili();
		void setDogumYili(int dogumYili);
		double getKilo();
		void setKilo(double kilo);
		char* getAd();
		void setAd(char* ad);
		char* getSoyad();
		void setSoyad(char* soyad);
		char* getTc();
		void setTc(char* Tc);
		char* getMemleket();
		void setMemleket(char* memleket);
		void YuruyusYap(float mesafe);
		void YemekYe(double kalori);
};


#endif

