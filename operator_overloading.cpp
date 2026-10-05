#include<iostream>
using namespace std;
class Number{
	public:
		int num;
		Number operator + (Number o)//operator overloading function
		{
			Number temp;
			temp.num = num + o.num;
			return temp;
		}
		void display(){
			cout<<"Value ="<<num;
		}
};
main(){
	Number n1,n2,n3;
	n1.num = 10;
	n2.num = 20;
	n3 = n1 + n2;//n1 operator + (n2)
	n3.display();
}
