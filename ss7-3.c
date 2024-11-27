#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
	int i;
	for(i = 0;i< 5; i++){
		printf("%d", arr[i]);
		if(arr[i] % 2 == 0){
			printf(" la so chan trong mang.\n", arr[i]);
		} else{
			printf(" khong phai la so chan trong mang.\n", arr[i]);
		}
	}
	

	return 0;
}
