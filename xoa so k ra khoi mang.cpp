#include<iostream>
using namespace std;
void nhap(int a[], int &n, int &k) {
	cout << "Nhap vao so n: "; cin >> n;
    for (int i = 0; i < n ; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
    
	cout << "nhap gia tri k: "; cin >>k;
}
void xuatmang(int a[], int n){
	cout << "danh sach phan tu: ";
	for( int i = 0; i< n; i++){
		cout << a[i] << " ";
	}
}
int Xoak(int a[], int &n,int k) {
    int i, j;
    int dem=0;
    for(i=0; i<n; i++) {
        if(a[i] == k) {
            for(j=i; j<n-1; j++) {
                a[j] = a[j+1];
            }
            dem++;
            n--;
            i--;
        }
    }
}
int main(){
	int a[100], n, k;
	nhap(a, n, k);
	Xoak(a, n, k);
	xuatmang(a, n);
	
}
