#include <stdio.h>

int main() {
    
	// De�i�ken tan�mlamalar�
    int operation, bill;
    int balance = 1000;
    int amount;

    	// Ho�geldiniz mesaj�
    	printf("Bankamiza Hos Geldiniz\n\n");

    	// Kullan�c�ya i�lem se�eneklerini g�sterme
    	printf("Lutfen Islem seciniz\n\n");
    	printf("Islemler:\n1- Para Cekme \n2- Para Yatirma \n3- Havale Yapma \n4- Fatura Yatirma \n5- Kart Iade\n\n");

    	// Kullan�c�n�n se�ti�i i�lemi alma
    	scanf("%d", &operation);

    	// ��lem se�imi
    	switch (operation) {
    	case 1:
    		
        	// Para �ekme i�lemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Cekmek Istediginiz Parayi Giriniz: ");
        	scanf("%d", &amount);
        	balance -= amount;

        	// Bakiye kontrol� ve sonu� mesajlar�
        	if (amount > balance) {
            	
				printf("Bakiye Yetersiz\n\n");
        	} 
			else {
            	
				printf("Paraniz Basariyla Cekilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	}
        	
			break;

    	case 2:
        	
			// Para yat�rma i�lemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Yatirmak Istediginiz Tutari Giriniz: ");
        	scanf("%d", &amount);
        	balance += amount;

        	// Sonu� mesajlar�
        	printf("Paraniz Basariyla Yatirilmistir\n\n");
    		printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	
			break;

    	case 3:
        	
			// Havale i�lemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Havale Yapmak Istediginiz Tutari Giriniz: ");
        	scanf("%d", &amount);
        	balance -= amount;

        	// Sonu� mesajlar�
        	printf("Havaleniz Basariyla Gerceklestirilmistir \n\n");
        	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	
			break;

    	case 4:
        	
			// Fatura �deme i�lemi
        	printf("Lutfen Yatirmak Istediginiz Faturayi Seciniz\n");
        	printf("1- Elektrik \n2- Su \n3- Dogalgaz\n\n");
        	scanf("%d", &bill);

        	// Fatura tipi se�imi
        	switch (bill) {
        	case 1:
        		
            	// Elektrik faturas� �deme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonu� mesajlar�
            	printf("Elektrik Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	case 2:
            	
				// Su faturas� �deme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonu� mesajlar�
            	printf("Su Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	case 3:
            	
				// Do�algaz faturas� �deme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonu� mesajlar�
            	printf("Dogalgaz Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	default:
            	
				// Ge�ersiz i�lem
            	printf("Islem Gecersizdir\n\n");
            	break;
        	}
        	
			break;

    	case 5:
        	
			// Kart iade i�lemi
        	break;

    	default:
        	
			// Ge�ersiz i�lem
			printf("Islem Gecersizdir\n\n");
        	
			break;
    	}

    	// Kart iade mesaj�
    	printf("Kartiniz Basariyla Iade Edilmistir\n\n");
    	printf("Iyi Gunler Yine Bekleriz");

    return 0;
}
