#include <stdio.h>

int main(){
	
	int arr[50];
	int sumArr[50];
	int counter=0;
	int sum=0;
		
		// Kullan�c�dan say� giri�i al�n�r, harf girilene kadar devam eder
		printf("Lutfen Sayi Giriniz(Cikis icin harf giriniz): ");
		
		while(1){
			
			// E�er bir harf giri�i yap�l�rsa d�ng�den ��k�l�r
			if(scanf("%d",&arr[counter])!=1){
				
				break;
			}
			else{
				
				counter++;
			}
			
		}
		
		// Girilen say�lar� topla ve her ad�mda toplam� sumArr dizisine kaydet
		for(int i=0;i<counter;i++){
			
			sum += arr[i];
			sumArr[i] = sum;
			
		}
	
		// Girilen say�lar� ekrana bast�r
		printf("Dizi: ");
	
		for(int i=0;i<counter;i++){
			
			printf("%d ",arr[i]);
			
		}
		
		// Her ad�mdaki toplamlar� ekrana bast�r
		printf("\n\n");	
		printf("Toplam Dizi: ");		
		for(int i=0;i<counter;i++){
		
			printf("%d ",sumArr[i]);	
		}
		
	return 0;
}
