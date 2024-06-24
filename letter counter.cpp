#include <stdio.h>

// B�y�k harfi k���k harfe �eviren fonksiyon
char toLower(char letter){
	
	if(letter >= 'A' && letter <= 'Z'){
		
		letter = letter -'A'+'a';
		return letter;
	}
	else{
		
		return letter;
	}	
}

// Alfanumerik bir karakter olup olmad���n� kontrol eden fonksiyon
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
	
		// Kullan�c�dan metni alma
		printf("Lutfen Metin Giriniz: ");
		fgets(text,sizeof(text),stdin);
		
		// Her harfin kullan�m s�kl���n� sayma
		for(int i=0;text[i]!='\0';i++){
			
			char character = toLower(text[i]);
			
			if(isAlpha(text[i])){
				
				numLetters[character - 'a']++;
			}	
		}
		
		// Kullan�lan harfleri ekrana yazd�rma
		printf("Kullanilan Harfler:\n");
		
		for(int i=0;i<26;i++){
			
			if(numLetters[i]>0){
				
				printf("%c Harfi %d Kez Kullanilmistir.\n",'a'+i,numLetters[i]);	
			}	
		}
	
	return 0;
}
