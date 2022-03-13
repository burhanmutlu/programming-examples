#include <iostream>
#include <ctime>
using namespace std;
int main() {
	
	time_t saat; // time_t: veri tipi
	cout << ctime(&saat); // 1970
	time(&saat); // þuanýn tarihi, mevcut zamaný iþler
	cout << ctime(&saat); // 2021
	
}
