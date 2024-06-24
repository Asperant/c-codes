#include <stdio.h>

void decimalToBinary(int n){
	
	int binary[32];
	int i = 0;
	
		while(n>0){
			
			binary[i] = n % 2;
			n /= 2;
			i++;
		}
	
		printf("Binary: ");
		
		for(int j=i-1;j>=0;j--){
			
			printf("%d",binary[j]);
		}	
	
		printf("\n");
}

void decimalToOctal(int n){
	
	int binary[32];
	int i=0;
	
		while(n>0){
			
			binary[i] = n % 8;
			n /= 8;
			i++;
		}
		
		printf("Octal: ");
		
		for(int j=i-1;j>=0;j--){
			
			printf("%d",binary[j]);
		}
	
		printf("\n");
}


void decimalToHexadecimal(int n){
	
	char hexadecimal[32];
	int i=0;
	
		while(n>0){
			
			int remainder = n % 16;
			
			if(remainder < 10){
				
				hexadecimal[i] = remainder + '0';
			}
			else{
				
				hexadecimal[i] = remainder + 'A' - 10;
			}
			n /= 16;
			i++;
		}
	
		printf("Hexadecimal: ");
		
		for(int j=i-1;j>=0;j--){
			
			printf("%c",hexadecimal[j]);
		}
	
}


int main(){
	
	int num;
	
		printf("10 luk tabanda bir sayi giriniz: ");
		scanf("%d",&num);
		
		decimalToBinary(num);
		decimalToOctal(num);
		decimalToHexadecimal(num);
	
	
	return 0;
}
