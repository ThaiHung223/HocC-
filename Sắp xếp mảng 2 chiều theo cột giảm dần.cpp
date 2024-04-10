#include <iostream>
int a[100][100];
int d, c;
using namespace std;
void nhapMang(int a[100][100],int &d,int &c){
	cout<<"Nhap dong:";cin>>d;
	cout<<"Nhap cot:";cin>>c;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
		}
	}
void xuatMang(int a[100][100],int d,int c)
{
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}cout<<endl;
		}
}
int sapXepGiam(int x[100][100], int d, int c){
	int k = d*c;
	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(x[i/c][i%c]<x[j/c][j%c]){
				int temp  = x[i/c][i%c];
				x[i/c][i%c] = x[j/c][j%c];
				x[j/c][j%c] = temp;
			}
		}
	}
}
int main(){
	nhapMang(a, d, c);
	xuatMang(a, d, c);
	sapXepGiam(a, d, c);
	printf("\n Mang da sap xep giam la: \n");
	xuatMang(a, d, c);
}
