#include <stdio.h>
#include <stdbool.h>

// Bir sayýnýn belirli bir üs kuvvetini hesaplayan fonksiyon
int power(int base,int exponent){
	
	int result=1;
	
		while(exponent!=0){
			
			result *= base;
			exponent--;
		}
	
	return result;
}

// Bir sayýnýn Armstrong sayýsý olup olmadýðýný kontrol eden fonksiyon
bool armstrong(int num){
	
	int temp = num;
	int originalNum = num;
	int digitCount=0, sum=0;					
	
	// Sayýdaki basamak sayýsýný bulma
		while(num!=0){
		
			num = num / 10;
			digitCount++;
		}
		
		// Armstrong sayýsý kontrolü
		while(temp!=0){
			
			int digit = temp % 10;
			sum += power(digit,digitCount);
			temp = temp / 10;	
		}

	return(originalNum == sum);	
}

int main(){
	
	int num;
	
		// Kullanýcýdan sayý alma
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&num);
	
		// Armstrong sayýsý kontrolü ve sonucu ekrana yazdýrma
		if(armstrong(num)){
			
			printf("%d Sayisi Armstrong Sayisidir.",num);
			
		}
		else{
			
			printf("%d Sayisi Armstrong Sayisi Degildir.",num);
		}
	
	return 0;
}
