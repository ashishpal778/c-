#include<iostream>
using namespace std;
int main(){
	int a=10;
	try{
		throw 1;
	}
	catch(int x){
	cout<<"catch block";
}
}