#include <iostream>
using namespace std;
class construct{
	int a,b;
public:
	construct (){ //default constructor
	}
	construct(int x){ //parameterised constructr
		a=x;
		cout<<a;
	}
	construct(int x,int y){
		a=x,b=y;
		cout<<a<<b<<endl;
	}
	construct(construct &c){ //copy constructor
		a=c.a,b=c.b;
		cout<<a<<" "<<b<<endl;
	}

};
int main(){
	construct c1(3,5);
	construct c2(c1);
}