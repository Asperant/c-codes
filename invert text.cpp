#include <stdio.h>
#include <string.h>

void invertf(char array[]){
	
	int length;
	
	length = strlen(array);
		
		for(int i=0;i<length/2;i++){
			
			int temp = array[i];
			array[i] = array[length-i-1];
			array[length-i-1] = temp;
	}
}


int main(){
	
	char text[20];
	
		printf("Kelimeyi Giriniz: ");
		gets(text);
		
		invertf(text);
		
		printf("%s",text);	
	
	return 0;
}
