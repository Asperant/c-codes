#include <stdio.h>

int main(){
	
	int arr[1000];
	int counter=0,sum=0;
	int i;
	float average;
		
		// Kullanýcýdan sayý giriþi alýnýr
		printf("Lutfen Sayi Giriniz(cikis icin herhangi bir harf giriniz): ");
		
		// Kullanýcý sayý girdikçe devam eden bir döngü
		while(scanf("%d",&arr[counter])==1){
			
			sum += arr[counter];
			
			counter++;
			
			// Maksimum giriþ sýnýrýna ulaþýldýðýnda uyarý verilir ve döngü sonlandýrýlýr
			if(counter>=1000){
				
				printf("Maksimum Giris Sayisina Ulastiniz.");
				break;
				
			}
			
		}
		
		// Girilen sayýlarýn ortalamasý hesaplanýr
		average = (float)sum / counter;
		
		// Sonuçlarý ekrana yazdýrma
		printf("Dizinin Elamanlarinin Toplami %d'dir\n\n",sum);
		printf("Dizinin Elemanlarinin Ortalamasi %.2f'dir",average);
	
	return 0;
}
