#include <iostream>
using namespace std;


void geeks(){
	int var = 20;
  	int var2 = 30;
    // declare pointer variable
    int* x;
  	int* y;
    // note that data type of ptr and var must be same
    x = &var;
	y = &var2;
	
	cout<<"value of x before swap:"<<*x<<"at"<<x<<endl;
	cout<<"value of y before swap:"<<*y<<"at"<<y<<endl;
	
	swap(x,y);
	
	cout<<"value of x after swap:"<<*x<<"at"<<x<<endl;
	cout<<"value of y after swap:"<<*y<<"at"<<y<<endl;
    
    cout<<*x;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
geeks();
return 0 ;
}

