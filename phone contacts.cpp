#include <stdio.h>

struct Person{
	
	char name[50];
	char surname[50];
	char phoneNumber[15];
	
};

// Kiþi eklemek için fonksiyon
void addPerson(struct Person *people,int *count){
	
	printf("Isim: ");
	// Ýsim giriþi, sayýsal karakter içermemeli
	int c;
	scanf("%d",&c);
	fgets(people[*count].name, sizeof(people[*count].name), stdin);
	
	printf("Soyisim: ");
	fgets(people[*count].surname, sizeof(people[*count].surname), stdin);
	
	printf("Telefon Numarasi: ");
	fgets(people[*count].phoneNumber, sizeof(people[*count].phoneNumber), stdin);
	
	printf("Kisi Eklenmistir.\n\n");
	
	(*count)++;
}

// Kiþileri listelemek için fonksiyon
void listPerson(struct Person *people, int count){
	
	printf("Kisiler:\n");
	for(int i=0;i<count;i++){
		
		printf("%d. Kisi:\n",i+1);
		printf("Isim: %s\n",people[i].name);
		printf("Soyisim: %s\n",people[i].surname);
		printf("Telefon Numarasi: %s\n",people[i].phoneNumber);
		
	}
	
	printf("Kisiler Listelenmistir.\n");
}

int main(){
	
	struct Person people[100];
	int count = 0;
		
	int choice;
	
		do{
			
			printf("1. Kisi Ekle\n");
			printf("2. Kisileri Listele\n");
			printf("3. Cikis\n");
			printf("Seciminiz: ");
			scanf("%d",&choice);
			
			switch(choice){
				
				case 1:
					addPerson(people,&count);
					break;
				case 2:
					listPerson(people,count);
					break;
				case 3:
					printf("Programdan Cikiliyor.");
					break;
				default:
					printf("Gecersiz Secim Tekrar Deneyiniz.");
				
			}
			
		} while(choice != 3);		
	
	
	return 0;
}
