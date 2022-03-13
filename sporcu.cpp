#include <iostream>
using namespace std;

typedef class insan {
	private:
		int age,weight,height;
	public:
		void setAge(int age){
			this->age = age;
		}
		int getAge(){
			return this->age;
		}
		
		void setWeight(int weight){
			this->weight = weight;
		}
		int getWeight(){
			return this->weight;
		}
		
		void setHeight(int height){
			this->height = height;
		}
		int getHeight(){
			return this->height;
		}
		void sporYap(){
			weight--;
		}
		void yemekYe(){
			weight++;
		}
};


int main()
{
	insan burhan;
	burhan.setAge(19);
	burhan.setHeight(165);
	burhan.setWeight(54);
	cout << "yas: " << burhan.getAge() << endl;
	cout << "boy: " << burhan.getHeight() << endl;
	cout << "kilo: " << burhan.getWeight() << endl;
	burhan.sporYap();
	cout << "yas: " << burhan.getAge() << endl;
	cout << "boy: " << burhan.getHeight() << endl;
	cout << "kilo: " << burhan.getWeight() << endl;
	burhan.yemekYe();
	burhan.yemekYe();
	burhan.yemekYe();
	burhan.yemekYe();
	burhan.yemekYe();
	cout << "yas: " << burhan.getAge() << endl;
	cout << "boy: " << burhan.getHeight() << endl;
	cout << "kilo: " << burhan.getWeight() << endl;
	
}
