#include <stdio.h>

int power(int base,int power){
	
	int i = power;
	int result = 1;
	
		while(i != 0){
			
			result *= base;
			i--;	
		}
	
	return result;
}

int binaryToDecimal(long long binaryNum){
	
	int decimalNum;
	int i = 0,remainder;
		
		while(binaryNum != 0){
			
			remainder = binaryNum % 10;
			decimalNum += remainder * power(2,i);
			binaryNum /= 10;
			i++;
		}

	return decimalNum;
}


int main(){
	
	long long binaryNum;
	
		printf("0 ve 1 seklinde 2 lik tabandaki sayiyi giriniz: ");
		scanf("%lld",&binaryNum);
		
	int decimalNum = binaryToDecimal(binaryNum);
		
		printf("10 luk tabandaki sayi: %d",decimalNum);	
	
	
	return 0;
}
