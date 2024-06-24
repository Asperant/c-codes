#include <stdio.h>

int main(){
	
	int firstNum,secondNum,newNum;
	int counter=0;
		
		// Ýlk iki sayýyý kullanýcýdan al
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&firstNum);
		
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&secondNum);
		
	while(1){
		
		// Yeni bir sayý al	
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&newNum);
		
		// Ýki önceki sayýnýn toplamýyla yeni sayýyý karþýlaþtýr	
	int sum = firstNum + secondNum;
		
		if(sum == newNum){
			
			counter++;
			
		}	
		
		// Sayýlarý güncelle	
		firstNum = secondNum;
		secondNum = newNum;
		
	char continueInput;
		
		// Devam etmek isteyip istemediðini sor
		printf("Devam Etmek Istiyor Musunuz? (E/H): ");
		scanf(" %c",&continueInput);
		
		if(continueInput != 'e' && continueInput != 'E'){
			
			break;
		}	
	}
		
		// Kaç kez önceki iki sayýnýn toplamýnýn yeni girilen sayýya eþit olduðunu ekrana bastýr
		printf("%d Kez Onceki Iki Sayinin Toplami Yeni Girilen Sayiya Esitti",counter);

	return 0;
}
