#include<iostream>
#include <string.h> 
using namespace std;
int len(char a[]){
	int i = 0;
	while(true){
		if(a[i] == '\0'){
			return i;
		}
		i++;
	}
}
void xuatchuoi(char a[]){
	for(int i = 0; i < len(a); i++){
		cout << a[i];
	}
}
struct SinhVien{
	int msv;
	float m1, m2, m3, tb;
	char hoten[100];
	char khoi[10];
	
};
void nhapthongtin(SinhVien a[], int &n){
	cout << "nhap so hoc sinh: "; cin >> n;
	for(int i = 0; i <n; i++){
		cout << "Nhap Msv: "; cin >> a[i].msv;
		cout << "Nhap ho va ten: "; 
		cin.ignore(); cin.getline(a[i].hoten,100);
		cout << "Nhap khoi thi: "; cin.getline(a[i].khoi,10);
		cout << "Nhap diem m1: "; cin >> a[i].m1;
		cout << "Nhap diem m2: "; cin >> a[i].m2;
		cout << "Nhap diem m3: "; cin >> a[i].m3;
	}
}
void Xuat(SinhVien a[], int &n)//ham xuat sinh vien
{
    
    for(int i=0; i<n ; i++)//vong lap for duyet sinh vien trong mang 0 den n-1
    {
        //hien thi cac sinh vien trong mang
        printf("%d \t %s \t %s \t %0.2f \t %0.2f \t %0.2f \t %0.2f\n", a[i].msv, a[i].hoten, a[i].khoi, a[i].m1 , a[i].m2 , a[i].m3, a[i].tb);
    }
}
void sapxep(SinhVien a[], int n){
    SinhVien tmp;
    for(int i = 0;i < n;i++){
        for(int j = i+1; j < n;j++){
            if(a[i].tb<a[j].tb){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void diemTb(SinhVien a[], int n){
	for(int i = 0; i<n; i++){
		if(a[i].khoi == "A"){
			a[i].tb = (a[i].m1 * 2 + a[i].m2 + a[i].m3) / 4;
		}
		if(a[i].khoi == "B"){
			a[i].tb = (a[i].m1 + a[i].m2 * 2 + a[i].m3) / 4;
		}
		else{
			a[i].tb = (a[i].m1 + a[i].m2 + a[i].m3 * 2) / 4;
		}
	}
}
void ThemSV(SinhVien a[], int n)
{
    n++;
    cout<<"\nNhap thong tin sinh vien muon them:\n";
    for(int i = n-1 ; i > 0 ; i--)
    {
        cout << "Nhap Msv: "; cin >> a[i].msv;
		cout << "Nhap ho va ten: "; 
		cin.ignore(); cin.getline(a[i].hoten,100);
		cout << "Nhap khoi thi: "; cin.getline(a[i].khoi,10);
		cout << "Nhap diem m1: "; cin >> a[i].m1;
		cout << "Nhap diem m2: "; cin >> a[i].m2;
		cout << "Nhap diem m3: "; cin >> a[i].m3;
    }
   
    cout<<"\nDanh sach sinh vien sau khi them la:\n";
    Xuat(a,n);
	
}
main(){
	SinhVien a[200];
	int n;
	nhapthongtin(a, n);
	diemTb(a, n);
	ThemSV(a,n);
	for (int i = 0; i < n; i++){
		cout << "\nMa hoc sinh: " << a[i].msv << endl;
		cout << "Ho va ten: "; xuatchuoi(a[i].hoten); cout << endl;
		cout << "Diem trung binh: " << a[i].tb << endl;
	}
	sapxep(a,n);
	
}

