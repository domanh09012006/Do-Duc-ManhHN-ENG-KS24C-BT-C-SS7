#include<stdio.h>
int main(){
	int array[5], a;
	for(int i=0; i<5; i++){
		printf("Nhap gia tri cho mang: ", i);
		scanf("%d", &array[i]);
	}
	for(int i=0; i<5; i++){
		if(array[i] % 2 == 0){
			a++;
		}
	}if(a>0){
		printf("Mang co %d so chan", a);
	}else{
		printf("Mang khong co so chan");
	}
	return 0;
}
