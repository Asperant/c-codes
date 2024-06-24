#include <stdio.h>

// Büyük harfi küçük harfe çeviren fonksiyon
char toLower(char letter){
	
	if(letter >= 'A' && letter <= 'Z'){
		
		letter = letter -'A'+'a';
		return letter;
	}
	else{
		
		return letter;
	}	
}

// Alfanumerik bir karakter olup olmadýðýný kontrol eden fonksiyon
int isAlpha(char character){
	
	if(character >= 'A' && character <= 'Z' || character >= 'a' && character <= 'z'){
		
		return 1;
	}
	else{
		
		return 0;
	}
}


int main(){
	
	char text[1000];
	int numLetters[26] = {0};
	
		// Kullanýcýdan metni alma
		printf("Lutfen Metin Giriniz: ");
		fgets(text,sizeof(text),stdin);
		
		// Her harfin kullaným sýklýðýný sayma
		for(int i=0;text[i]!='\0';i++){
			
			char character = toLower(text[i]);
			
			if(isAlpha(text[i])){
				
				numLetters[character - 'a']++;
			}	
		}
		
		// Kullanýlan harfleri ekrana yazdýrma
		printf("Kullanilan Harfler:\n");
		
		for(int i=0;i<26;i++){
			
			if(numLetters[i]>0){
				
				printf("%c Harfi %d Kez Kullanilmistir.\n",'a'+i,numLetters[i]);	
			}	
		}
	
	return 0;
}
