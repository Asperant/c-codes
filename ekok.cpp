#include <stdio.h>

// Ýki sayýnýn En Küçük Ortak Katýný (EKOK) bulan fonksiyon
int findEKOK (int firstNumber, int secondNumber) {
    
	int tempA = firstNumber, tempB = secondNumber;

    // EKOK'u bulmak için döngü
    while (firstNumber != secondNumber) {
        
		if (firstNumber > secondNumber) {
            
			secondNumber += tempB;
        } 
		else {
            
			firstNumber += tempA;
        }
    }

    return firstNumber;
}

int main(){
	
	int current,num;
	
		printf("Lutfen Sayi Giriniz(cikis icin herhangi bir harf giriniz): ");
		
		// Ýlk giriþi kontrol et
		if(scanf("%d",&num)!=1){
			
			printf("Ilk Giriþ Sayi Olmalidir.");
			return 1;	
		}
	
		current = num;
		
		// Kullanýcý sayý girdikçe devam eden bir döngü
		while(1){
			
			if(scanf("%d",&num)!=1){
				
				break;	
			}
			
			// EKOK'u güncelle
			current = findEKOK(current,num);
		}
		
		// Bulunan EKOK'u ekrana yazdýrma
		printf("Girilen Sayilarin EKOK'u %d'dir",current);
	
	return 0;
}
