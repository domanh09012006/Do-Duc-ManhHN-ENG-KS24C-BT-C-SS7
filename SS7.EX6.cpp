#include<stdio.h>
int main(){
	int array[5]={3,5,7,8,3};
	printf("Phan tu truoc thay doi: 3 5 7 8 3");
	for(int i=0; i<5; i++){
		if(array[i]%2 == 0){
			array[i]+=3;
		}
		if(array[i]%2 != 0){
			array[i]+=2;
		}
	}
	printf("\nPhan tu sau thay doi: ");
	for(int i=0; i<5; i++){
		printf(" %d", array[i]);
	}
	return 0;
}
