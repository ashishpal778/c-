#include<iostream>
using namespace std;
class student{
	int a,b;				//inctance variable
public:
	void set_data(int x,int y){// instance function
		 a=x,b=y;
		}
	void show_data(){
		cout<<a<<" "<<b;
	}
	student add(student s2){
		student temp;
		temp.a=a+s2.a;
		temp.b=b+s2.b;
		return temp;
	}
};
// void student:: set_data(int x,int y){                                //we can define member function outside of class
// 	a=x,b=y;                                                            //isme inline function bnana pdta h
//}
int main(){
	student s,s1,s3;   //s,s1 is called obeject 
	s.set_data(2,3);
	s1.set_data(5,9);
	s3=s.add(s1);
	s3.show_data();

}