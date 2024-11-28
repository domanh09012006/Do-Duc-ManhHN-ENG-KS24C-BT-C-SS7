#include<stdio.h>
int main(){
	int array[3]={1,2,3};
	printf("Cac thanh phan trong mang la: %d %d %d", array[0], array[1], array[2]);
	printf("\nDo dai cua mang la: %d", sizeof(array)/sizeof(int));
	return 0;
}
