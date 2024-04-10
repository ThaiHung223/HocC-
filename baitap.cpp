#include<iostream>
#include<math.h>
bool KiemTraNguyenTo(int n){
	if(n<2){
		return false;
	}
	else if(n>2){
		if(n%2==0){
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2){
            if (n % i == 0)
			{
                return false;
            }
        }
    }
    return true;
}
int main(){
	int n;
	int a[100];
	int dem=0;
	do{
		scanf("%d", &n);
    }while(n<1 || n>100);
    for(int i=0; i< n; i++){
        scanf("%d", &a[i]);
	}
	printf("Mang A gom:\n");
	for(int i=0; i<n; i++){
		printf("%d \t",a[i]);
	}
		for(int i=0; i<n; i++){
			if(KiemTraNguyenTo(a[i])== true){
				dem++;
			}
		}
		printf("\nSo luong cac so nguyen to la:%d",dem);
}
