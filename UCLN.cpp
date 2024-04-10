#include<iostream>

using namespace std;

int UCLN(int a, int b){
    if (b == 0) return a;
    return UCLN(b, a%b);
}

int main(){
    int a, b;
	cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    cout << "UCLN : "<<UCLN(a, b);
}
