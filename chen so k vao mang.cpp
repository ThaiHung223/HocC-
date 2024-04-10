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
	for( int i = 0; i< n+1; i++){
		cout << a[i] << " ";
	}
}
void chen(int a[], int n, int k){
	for(int i = 0; i < n; i++){
		if(a[i] > k){
			for( int j = n; j > i; j--){
				a[j] = a[j-1];
			}
			a[i] = k;
			break;
		} else{
			a[n] = k;
		}
		
	}
}
int main(){
	int a[100], n, k;
	nhap(a, n, k);
	chen(a, n, k);
	xuatmang(a, n);
	
}
