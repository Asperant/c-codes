#include <stdio.h>

int main(){
	
	int arr[1000];
	int counter=0,sum=0;
	int i;
	float average;
		
		// Kullan�c�dan say� giri�i al�n�r
		printf("Lutfen Sayi Giriniz(cikis icin herhangi bir harf giriniz): ");
		
		// Kullan�c� say� girdik�e devam eden bir d�ng�
		while(scanf("%d",&arr[counter])==1){
			
			sum += arr[counter];
			
			counter++;
			
			// Maksimum giri� s�n�r�na ula��ld���nda uyar� verilir ve d�ng� sonland�r�l�r
			if(counter>=1000){
				
				printf("Maksimum Giris Sayisina Ulastiniz.");
				break;
				
			}
			
		}
		
		// Girilen say�lar�n ortalamas� hesaplan�r
		average = (float)sum / counter;
		
		// Sonu�lar� ekrana yazd�rma
		printf("Dizinin Elamanlarinin Toplami %d'dir\n\n",sum);
		printf("Dizinin Elemanlarinin Ortalamasi %.2f'dir",average);
	
	return 0;
}
