#include<iostream>
using namespace std;
int LuyThua(int a,int b){
	if(b==1)
     return a;
    if(b==0)
    return 1;
     else
     return LuyThua(a,b-1)*a;
	}
	
int main(){
	int a,b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"KQ la:"<<LuyThua(a,b);
	}
