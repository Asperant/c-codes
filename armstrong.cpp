#include <stdio.h>
#include <stdbool.h>

// Bir say�n�n belirli bir �s kuvvetini hesaplayan fonksiyon
int power(int base,int exponent){
	
	int result=1;
	
		while(exponent!=0){
			
			result *= base;
			exponent--;
		}
	
	return result;
}

// Bir say�n�n Armstrong say�s� olup olmad���n� kontrol eden fonksiyon
bool armstrong(int num){
	
	int temp = num;
	int originalNum = num;
	int digitCount=0, sum=0;					
	
	// Say�daki basamak say�s�n� bulma
		while(num!=0){
		
			num = num / 10;
			digitCount++;
		}
		
		// Armstrong say�s� kontrol�
		while(temp!=0){
			
			int digit = temp % 10;
			sum += power(digit,digitCount);
			temp = temp / 10;	
		}

	return(originalNum == sum);	
}

int main(){
	
	int num;
	
		// Kullan�c�dan say� alma
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&num);
	
		// Armstrong say�s� kontrol� ve sonucu ekrana yazd�rma
		if(armstrong(num)){
			
			printf("%d Sayisi Armstrong Sayisidir.",num);
			
		}
		else{
			
			printf("%d Sayisi Armstrong Sayisi Degildir.",num);
		}
	
	return 0;
}
