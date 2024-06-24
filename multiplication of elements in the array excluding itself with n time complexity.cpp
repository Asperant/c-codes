#include <stdio.h>
#include <stdlib.h>

int* zuhahahasalihaq(int* nums,int size){
	
	int* result = (int*)malloc(sizeof(int)*size);
	int* left_result = (int*)malloc(sizeof(int)*size);
	int* right_result = (int*)malloc(sizeof(int)*size);
	
	left_result[0] = 1;
	for(int i=1;i<size;i++){
		left_result[i] = left_result[i-1] * nums[i-1];
	}
	
	right_result[size-1] = 1;
	for(int i=size-2;i>=0;i--){
		right_result[i] = right_result[i+1] * nums[i+1];
	}
	for(int i=0;i<size;i++){
		result[i] = left_result[i] * right_result[i];
	}
	
	free(right_result);
	free(left_result);
	
	return result;
}

int main(){
		
	int nums[] = {1,2,3,4};
	int size = 4;
	int *result = zuhahahasalihaq(nums,size);
	
	for(int i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
	printf("\n");
	for(int i=0;i<size;i++){
		printf("%d ",result[i]);
	}
	
	free(result);
	
	return 0;
}
