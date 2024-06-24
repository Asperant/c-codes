#include <stdio.h>

// �ki say�n�n En K���k Ortak Kat�n� (EKOK) bulan fonksiyon
int findEKOK (int firstNumber, int secondNumber) {
    
	int tempA = firstNumber, tempB = secondNumber;

    // EKOK'u bulmak i�in d�ng�
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
		
		// �lk giri�i kontrol et
		if(scanf("%d",&num)!=1){
			
			printf("Ilk Giri� Sayi Olmalidir.");
			return 1;	
		}
	
		current = num;
		
		// Kullan�c� say� girdik�e devam eden bir d�ng�
		while(1){
			
			if(scanf("%d",&num)!=1){
				
				break;	
			}
			
			// EKOK'u g�ncelle
			current = findEKOK(current,num);
		}
		
		// Bulunan EKOK'u ekrana yazd�rma
		printf("Girilen Sayilarin EKOK'u %d'dir",current);
	
	return 0;
}
