#include <stdio.h>

int main(){
	
	char text[1000],word[100],longestWord[100];
	
		printf("Lutfen Metin Giriniz: ");
		gets(text);
		
	int i=0,j,length,longestLength=0;
	
		while(text[i]!='\0'){
			
			while(text[i]==' '){
				
				i++;
			}
		
	j = 0;
		
		while(text[i]!='\0' && text[i]!=' '){
			
			word[j++] = text[i++];
		}	
		
		word[j] = '\0';
	
	length = 0;
		
		while(word[length]!='\0'){
			
			length++;
		}
		
		if(length > longestLength){
			
			longestLength = length;
			
			for(int k=0;k<=length;k++){
				
				longestWord[k] = word[k];
			}
		}
	}
	
		printf("En Uzun Kelime: %s",longestWord);
		printf("\n%d",length);
		
	return 0;
}
