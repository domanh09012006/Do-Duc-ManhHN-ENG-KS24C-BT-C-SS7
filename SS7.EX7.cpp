#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int array[n], i=0, b;
	while(i<5){
		printf("\nNhap vao mang so le: ");
		scanf("%d", &b);
		if(b%2 != 0){
			array[i] = b;
			i++;
		}else{
			
			printf("\nSo dc nhap khong phai so le!");
		}
	}printf("\nMang so le la:");
	for(int a=0; a<5; a++){
		printf(" %d", array[a]);
	}
	
	return 0;
}
