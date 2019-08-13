#include<fstream>
#include<iostream>
using namespace std;
int main(){
	// ofstream t;						//for object
	// t.open("myfile.txt");      		//file name which u want to create
	// t<<"hello";						// text writing

	ifstream fin;
	char ch;
	fin.open("myfile.txt");
	fin>>ch;                   //     ch=fin.get()     for space read
	while(!fin.eof()){
		cout<<ch;    
		fin>>ch;				//     ch=fin.get()  
	}
	fin.close();
}