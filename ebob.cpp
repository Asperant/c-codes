#include <stdio.h>

// �ki say�n�n En B�y�k Ortak B�lgenini (EBOB) bulan fonksiyon
int findEBOB(int firstNum,int secNum){
	
	int temp;
		
		// Euclidean algoritmas�n� kullanarak EBOB'u bul
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
			
			// EBOB'u g�ncelle
			current = findEBOB(current,num);
			
		}
		
		// Bulunan EBOB'u ekrana yazd�rma
		printf("Girilen Sayilarin EBOB'u %d'dir",current);
	
	return 0;
}
