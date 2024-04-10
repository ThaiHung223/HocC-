#include<iostream>
using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n){
	for( int i = 0; i< n; i++){
		cout << a[i] << " ";
	}
}
void tron(int a[], int b[], int c[], int n, int m, int &k){
	int i = 0;
	int j = 0;
	while((i<n) && (j < m)){
		if(a[i] < b[j]){
			c[k] = a[i];
			i++;
			k++;
		}else{
			c[k] = b[j];
			j++;
			k++;
		}
	}
	for(; i < n; i++){
		c[k] = a[i];
		k++;
	}
	for(; j < n; j++){
		c[k] = b[j];
		k++;
	}
}
int main(){
	int a[50];
	int b[50];
	int c[100];
	int n;
	int m;
	int k=0;
	
	cout << "\nNhap so luong phan tu mang A:";
	cin >> n;
	cout << "\n\tNhap mang:\n ";
	nhap(a, n);
	xuatmang(a, n);
	
	cout << "\nNhap so luong phan tu mang B:";
	cin >> m;
	cout << "\n\tNhap mang:\n ";
	nhap(b, m);
	xuatmang(b, m);
	cout << "\tMang c sau khi gop:\n";
	tron(a, b, c, n, m, k);
	xuatmang(c, k);
	return 0;
}
