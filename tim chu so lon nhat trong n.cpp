#include<iostream>
using namespace std;
int CSMax(int n){
	if(n<10)return n;
	if((n%10)>CSMax(n/10))
	   return n%10;
    else
       return CSMax(n/10);
	
	}
	
int main(){
	int n;
	cout<<"Nhap n:";
	cin>>n;
	cout<<"Chu so lon nhat cua n la:"<<CSMax(n);
	}
