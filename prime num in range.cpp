#include <stdio.h>

int main(){
	
	int start,end;
	
	// Kullanýcýdan baþlangýç ve bitiþ deðerlerini alma
		printf("Baslangic Degerini Giriniz: ");
		scanf("%d",&start);
		
		printf("Son Degeri Giriniz: ");
		scanf("%d",&end);
		
		printf("Bu Araliktaki Asal Sayilar [%d,%d]: ",start,end);
		
		// Asal sayýlarý bulma ve ekrana yazdýrma
			for(int i=start;i<=end;i++){
				
				int isPrime = 1;
				
				for(int j=2;j<i/2;j++){
					
					if(i%j == 0){
						
						isPrime = 0;
						break;
					}
				}
			
			// Asal sayýysa ekrana yazdýrma	
			if(isPrime && i>1){
				
				printf("%d ",i);	
			}
		}
		
		printf("\n");
	
	return 0;
}
