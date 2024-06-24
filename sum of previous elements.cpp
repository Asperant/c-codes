#include <stdio.h>

int main(){
	
	int arr[50];
	int sumArr[50];
	int counter=0;
	int sum=0;
		
		// Kullanýcýdan sayý giriþi alýnýr, harf girilene kadar devam eder
		printf("Lutfen Sayi Giriniz(Cikis icin harf giriniz): ");
		
		while(1){
			
			// Eðer bir harf giriþi yapýlýrsa döngüden çýkýlýr
			if(scanf("%d",&arr[counter])!=1){
				
				break;
			}
			else{
				
				counter++;
			}
			
		}
		
		// Girilen sayýlarý topla ve her adýmda toplamý sumArr dizisine kaydet
		for(int i=0;i<counter;i++){
			
			sum += arr[i];
			sumArr[i] = sum;
			
		}
	
		// Girilen sayýlarý ekrana bastýr
		printf("Dizi: ");
	
		for(int i=0;i<counter;i++){
			
			printf("%d ",arr[i]);
			
		}
		
		// Her adýmdaki toplamlarý ekrana bastýr
		printf("\n\n");	
		printf("Toplam Dizi: ");		
		for(int i=0;i<counter;i++){
		
			printf("%d ",sumArr[i]);	
		}
		
	return 0;
}
