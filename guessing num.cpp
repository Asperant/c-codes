#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num,attempt,guess;
	
	srand(time(NULL));
	num = rand() % 101;
	
		printf("Bilgisayar 0-100 arasinda bir sayi tuttu tahmin etmeye basla.\n\n");	
		
		do{
			printf("Tahmininiz: ");
			scanf("%d",&guess);
			attempt++;
			
				if(guess > num){
					
					printf("Daha kucuk bir sayi tahmin edin.\n");
				}
				else if(guess < num){
					
					printf("Daha buyuk bir sayi tahmin ediniz.\n");
				}
				else{
					
					printf("Tebrikler dogru bildiniz.\n");
					printf("Tahmin sayiniz: %d",attempt);
					break;
				}
			
		}while(1);	
		
	return 0;
}
