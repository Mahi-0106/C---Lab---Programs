#include<iostream>
using namespace std;
class Student{
	public:
		int marks;
		Student(int m):marks(m){	}//constructor definition
		Student operator + (Student s)
		{
			return Student(marks+s.marks);
//			Student t;
//			t.marks = marks + s.marks;
//			return t;	
		}
		void display(){
			cout<<"Two Students total marks are: "<<marks<<endl;
		}
};
class Minus{
	public:
		int num;
		Minus(int n):num(n){	}
		Minus operator -()
		{
			return -num;
		}
		void display(){
			cout<<"Minus operator overloading value is: "<<num;
		}
};
main(){
	Student s1(99),s2(98);
//	s1.marks = 98;
//	s2.marks = 99;
	Student s3 = s1 + s2;
	s3.display();
	Minus m(10);
	Minus m1 = -m;
	m1.display();
}
