#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int array[n];
	for(int i=0; i<n; i++){
		printf("Nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &array[i]);
	}
	for(int i=0; i<n; i++){
		printf("\ngia tri cua mang la: %d", array[i]);
	}
	return 0;
}
