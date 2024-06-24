#include <stdio.h>

int main(){
	
	char text[1000];
	char findWord[20];
	
		printf("Lutfen Metni Giriniz:");
		gets(text);
		
		printf("Lutfen Aranacak Kelimeyi Giriniz: ");
		scanf("%s",findWord);
		
	int startWord = -1;
	
		for(int i=0;text[i]!='\0';i++){
			
			if(text[i]==findWord[0]){
				
				int j = 1;
				
				while(text[i+j]==findWord[j]){
					
					j++;	
				}
				
				if(findWord[j] == '\0'){
					
					startWord = i;
					break;
				}		
			}
		}
		
		if(startWord <= -1){
			
			printf("Aranan Kelime Bulunamadi");
		}
		
		else{
		
			printf("Aranan Kelime %d. Harften Baslamaktadir",startWord+1);
		}
	
	return 0;
}
