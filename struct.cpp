#include<iostream>
using namespace std;
struct book{
private:
 int bookid; //member variable
 string title;
 float price;	
public:
 void display(){  //in c++ we can define function inside the structer
	cout<<bookid<<" "<<title<<" "<<price<<endl;
	}	
 void input(){
	cin>>bookid>>title>>price;
	if(bookid<0){
		bookid=-bookid;
	}

}
};
// book input(){
// 	book b4;  // b4 is called variable
// 	cin>>b4.bookid>>b4.title>>b4.price;
// 	return b4;

// void display(book x){ 
// 	cout<<x.bookid<<" "<<x.title<<" "<<x.price<<endl;
// 	}	
int main(){
	book b;
	// b={20,"c++",50.00}; //structure declaration
	// book b3= input();
	// display(b3);

	b.input();
	b.display();
	
	

}