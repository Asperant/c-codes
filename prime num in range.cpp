#include <stdio.h>

int main(){
	
	int start,end;
	
	// Kullan�c�dan ba�lang�� ve biti� de�erlerini alma
		printf("Baslangic Degerini Giriniz: ");
		scanf("%d",&start);
		
		printf("Son Degeri Giriniz: ");
		scanf("%d",&end);
		
		printf("Bu Araliktaki Asal Sayilar [%d,%d]: ",start,end);
		
		// Asal say�lar� bulma ve ekrana yazd�rma
			for(int i=start;i<=end;i++){
				
				int isPrime = 1;
				
				for(int j=2;j<i/2;j++){
					
					if(i%j == 0){
						
						isPrime = 0;
						break;
					}
				}
			
			// Asal say�ysa ekrana yazd�rma	
			if(isPrime && i>1){
				
				printf("%d ",i);	
			}
		}
		
		printf("\n");
	
	return 0;
}
