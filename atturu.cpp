#include <iostream>
using namespace std;

// ilklenme deðeri
void degerAta(int santranc[8][8])
{
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			santranc[i][j] = 0;
		}
	}
}
// deðer basma
void degerBas(int santranc[8][8])
{
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout << santranc[i][j] << " ";
		}
		cout << endl;
	}
}
void atHareket(int santranc[8][8])
{
	//satýr deðeri ve sütun deðeri 1 (5,6)
	int i=0, j=0, count=0;
	
	while(true){
		// eðer belirlenen yere önceden gidilmediyse 1 yap
		count++;
		if(santranc[i][j] == 0){
			santranc[i][j] = 1;
			cout << "1 olma: " << i << "  " << j << endl;
			//daha sonra atýn nereye gidileceði hesaplanýr (max 8 farklý durum)
			if(i-2 >= 0 && j-1 >= 0 && santranc[i-2][j-1] == 0){
				i = i-2;
				j = j-1;
			}else if(i-2 >= 0 && j+1 <8 && santranc[i-2][j+1] == 0){
				i = i-2;
				j = j+1;
			}else if(i+2 < 8 && j+1 <8 && santranc[i+2][j+1] == 0){
				i = i+2;
				j = j+1;
			}else if(i+2 < 8 && j-1 >= 0 && santranc[i+2][j-1] == 0){
				i = i+2;
				j = j-1;
			}else if(j+2 < 8 && i-1 >= 0 && santranc[i-1][j+2] == 0){
				i = i-1;
				j = j+2;
			}else if(j+2 < 8 && i+1 < 8 && santranc[i+1][j+2] == 0){
				i = i+1;
				j = j+2;
			}else if(j-2 >= 0 && i+1 < 8 && santranc[i+1][j-2] == 0){
				i = i+1;
				j = j-2;
			}else if(j-2 >=0 && i-1 >= 0 && santranc[i-1][j-2] == 0){
				i = i-1;
				j = j-2;
			}
			
			}else{
			// buraya önceden gelmiþ demektir.
			break;
		}
	}
	cout << count << endl;
	cout << "son deger: " << i << "  " << j << endl;
}

int main()
{
	int santranc[8][8];
	degerAta(santranc);
	degerBas(santranc);
	atHareket(santranc);
	degerBas(santranc);
//	cout << "at hareket noktasý seçin" << endl;
	
}
