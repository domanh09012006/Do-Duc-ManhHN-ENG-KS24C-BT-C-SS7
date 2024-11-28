#include<stdio.h>
int main(){
	int array[5], a;
	for(int i=1; i<6; i++){
		printf("Nhap gia tri thu %d cho mang: ", i);
		scanf("%d", &array[i]);
	}
	for(int i=1; i<6; i++){
		printf("\ngia tri cua mang la: %d", array[i]);
	}
	return 0;
}
