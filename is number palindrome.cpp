#include <stdio.h>

int isPalindrome(int num){
	
	int originalNum = num;
	int reversedNum = 0;
		
		while(num>0){
			
			int digit = num % 10;
			reversedNum = reversedNum * 10 + digit;
			num /= 10;
			
		}
		
	return(originalNum == reversedNum);
}


int main(){
	
	int num;
		
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&num);
		
		if(isPalindrome(num)){
			
			printf("Girilen Sayi Palindromdur.");
		}
		else{
			
			printf("Girilen Sayi Palindrom Degildir.");
		}
	
	return 0;
}
