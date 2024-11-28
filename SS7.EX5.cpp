#include<stdio.h>
int main(){
	int array[5]={3,5,7,8,3};
	int min = array[0], max = array[0];
	for(int i=0; i<5; i++){
		if(array[i]<min){
			min = array[i];
		}
		if(array[i]>max){
			max = array[i];
		}
	}
	printf("So lon nhat: %d", max);
	printf("Do nho nhat: %d", min);
	return 0;
}
