#include <stdio.h>

// Ýki sayýnýn En Büyük Ortak Bölgenini (EBOB) bulan fonksiyon
int findEBOB(int firstNum,int secNum){
	
	int temp;
		
		// Euclidean algoritmasýný kullanarak EBOB'u bul
		while(secNum!=0){
			
			temp = secNum;
			secNum = firstNum % secNum;
			firstNum = temp;
		}
	
	return firstNum; 		
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
			
			// EBOB'u güncelle
			current = findEBOB(current,num);
			
		}
		
		// Bulunan EBOB'u ekrana yazdýrma
		printf("Girilen Sayilarin EBOB'u %d'dir",current);
	
	return 0;
}
