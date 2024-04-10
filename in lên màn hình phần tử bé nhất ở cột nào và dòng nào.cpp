#include<iostream>
#include<math.h>
#include <stdio.h>
#include <conio.h>
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
void timmin(int a[100][100],int d, int c)
{
      int i,j,u=0,v=0,min=a[0][0];
      for (i=0;i<d;i++)
    {
       for (j=0;j<c;j++)
       if (a[i][j]<min)
       {
              min=a[i][j];
              u=i;
              v=j;
       }
   } printf("\nVi tri co gia tri nho nhat trong mang 2 chieu la:[%d][%d]",u+1,v+1);
}
int main(){
	int a[100][100],d,c;
	nhap(a,d,c);
	xuat(a,d,c);
	timmin(a,d,c);
	}
