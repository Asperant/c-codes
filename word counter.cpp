#include <stdio.h>

int main(){
	
	char text[1000];
	int count=0;
	
		printf("Metin girin: ");
		fgets(text,sizeof(text),stdin);
	
		for(int i=0;text[i]!='\0';i++){
			
			if(text[i]==' '|| text[i]== '\t' || text[i]=='\n'){
				
				count++;
			}
		}
		
		printf("Metin %d kelimeden olusuyor\n\n",count);
		
		for(int i=0;text[i]!='\0';i++){
			
			while(text[i]==' ' || text[i]=='\t' || text[i] =='\n'){
				
				i++;
			}
			
			while(text[i]!=' ' && text[i]!='\t' && text[i]!='\n' && text[i]!='\0'){
				
				printf("%c",text[i]);
				i++;
			}
			
			printf("\n");
		}	
	
	return 0;
}
