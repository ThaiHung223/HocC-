#include<iostream>
#include<math.h>
using namespace std;
void nhap(int a[100][100],int &d,int &c){
	cout<<"Nhap dong:";cin>>d;
	cout<<"Nhap cot:";cin>>c;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
		}
	}
void xuat(int a[100][100],int d,int c)
{
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}cout<<endl;
		}
}
bool ktr(int n){
	int kq= sqrt(n);
	if(kq*kq==n){
		return true;
		}
		return false;
}
int xuatmang(int a[100][100],int d,int c){
    for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			if(ktr(a[i][j])){
				a[i][j]=0;
				}
		}
}
}
int main(){
	int a[100][100],d,c;
	nhap(a,d,c);
	xuat(a,d,c);
	xuatmang(a,d,c);
	cout<<"mang da thay the la\n";
	xuat(a,d,c);
		
	}
