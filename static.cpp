#include<iostream>
using namespace std;
class Acount {
public:
	int a; //instance variable
	static int b; // class variable
	static void set_data(int x)
	{
	 b=x;
	}
};
int Acount:: b;   // definitaion of static variable
					// IN CPP defination is compulsary cout of the class
int main(){													
Acount a1;
cout<<a1.b<<endl;
a1.set_data(4);
cout<<Acount::b; //without object we can access static member
}