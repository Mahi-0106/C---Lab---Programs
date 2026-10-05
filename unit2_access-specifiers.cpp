#include<iostream>
using namespace std;
class Aeroplane{
	public:
		string brand;
	private:
		int speed;
	protected:
		int seats;
};
class Flight:public Aeroplane{
	public:
		void display(int s){
			seats = s;
			cout << "Max no. of seats: "<<s;
		}
};
main(){
	Aeroplane a;
	a.brand = "Indigo";
	cout<<"Brand: "<<a.brand<<endl;
	Flight f;
	f.display(4000);
}
