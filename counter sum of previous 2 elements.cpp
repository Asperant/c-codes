#include <stdio.h>

int main(){
	
	int firstNum,secondNum,newNum;
	int counter=0;
		
		// �lk iki say�y� kullan�c�dan al
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&firstNum);
		
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&secondNum);
		
	while(1){
		
		// Yeni bir say� al	
		printf("Lutfen Sayi Giriniz: ");
		scanf("%d",&newNum);
		
		// �ki �nceki say�n�n toplam�yla yeni say�y� kar��la�t�r	
	int sum = firstNum + secondNum;
		
		if(sum == newNum){
			
			counter++;
			
		}	
		
		// Say�lar� g�ncelle	
		firstNum = secondNum;
		secondNum = newNum;
		
	char continueInput;
		
		// Devam etmek isteyip istemedi�ini sor
		printf("Devam Etmek Istiyor Musunuz? (E/H): ");
		scanf(" %c",&continueInput);
		
		if(continueInput != 'e' && continueInput != 'E'){
			
			break;
		}	
	}
		
		// Ka� kez �nceki iki say�n�n toplam�n�n yeni girilen say�ya e�it oldu�unu ekrana bast�r
		printf("%d Kez Onceki Iki Sayinin Toplami Yeni Girilen Sayiya Esitti",counter);

	return 0;
}
