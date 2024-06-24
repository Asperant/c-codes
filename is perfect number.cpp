#include <stdio.h>

int isPerfect(int num){
	
	int sum = 0;
	
		for(int i=1;i<num;i++){
			
			if(num % i == 0){
				
				sum += i;
			}
		}
		
		return(sum==num);
}

int main(){
	
	int num;
	
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&num);
		
		if(isPerfect(num)){
			
			printf("Sayi Mukemmel Sayidir.");
		}
		else{
			
			printf("Sayi Mukemmel Sayi Degildir.");
		}
	
	return 0;
}
