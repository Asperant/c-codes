#include <stdio.h>

int main() {
    
	// Deðiþken tanýmlamalarý
    int operation, bill;
    int balance = 1000;
    int amount;

    	// Hoþgeldiniz mesajý
    	printf("Bankamiza Hos Geldiniz\n\n");

    	// Kullanýcýya iþlem seçeneklerini gösterme
    	printf("Lutfen Islem seciniz\n\n");
    	printf("Islemler:\n1- Para Cekme \n2- Para Yatirma \n3- Havale Yapma \n4- Fatura Yatirma \n5- Kart Iade\n\n");

    	// Kullanýcýnýn seçtiði iþlemi alma
    	scanf("%d", &operation);

    	// Ýþlem seçimi
    	switch (operation) {
    	case 1:
    		
        	// Para çekme iþlemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Cekmek Istediginiz Parayi Giriniz: ");
        	scanf("%d", &amount);
        	balance -= amount;

        	// Bakiye kontrolü ve sonuç mesajlarý
        	if (amount > balance) {
            	
				printf("Bakiye Yetersiz\n\n");
        	} 
			else {
            	
				printf("Paraniz Basariyla Cekilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	}
        	
			break;

    	case 2:
        	
			// Para yatýrma iþlemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Yatirmak Istediginiz Tutari Giriniz: ");
        	scanf("%d", &amount);
        	balance += amount;

        	// Sonuç mesajlarý
        	printf("Paraniz Basariyla Yatirilmistir\n\n");
    		printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	
			break;

    	case 3:
        	
			// Havale iþlemi
        	printf("Bakiyeniz: %d'dir\n", balance);
        	printf("Lutfen Havale Yapmak Istediginiz Tutari Giriniz: ");
        	scanf("%d", &amount);
        	balance -= amount;

        	// Sonuç mesajlarý
        	printf("Havaleniz Basariyla Gerceklestirilmistir \n\n");
        	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
        	
			break;

    	case 4:
        	
			// Fatura ödeme iþlemi
        	printf("Lutfen Yatirmak Istediginiz Faturayi Seciniz\n");
        	printf("1- Elektrik \n2- Su \n3- Dogalgaz\n\n");
        	scanf("%d", &bill);

        	// Fatura tipi seçimi
        	switch (bill) {
        	case 1:
        		
            	// Elektrik faturasý ödeme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonuç mesajlarý
            	printf("Elektrik Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	case 2:
            	
				// Su faturasý ödeme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonuç mesajlarý
            	printf("Su Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	case 3:
            	
				// Doðalgaz faturasý ödeme
            	printf("Lutfen Yatirilacak Tutari Giriniz: ");
            	scanf("%d", &amount);
            	balance -= amount;

            	// Sonuç mesajlarý
            	printf("Dogalgaz Faturaniz Basariyla Yatirilmistir\n\n");
            	printf("Yeni Bakiyeniz %d'dir\n\n", balance);
            	
				break;

        	default:
            	
				// Geçersiz iþlem
            	printf("Islem Gecersizdir\n\n");
            	break;
        	}
        	
			break;

    	case 5:
        	
			// Kart iade iþlemi
        	break;

    	default:
        	
			// Geçersiz iþlem
			printf("Islem Gecersizdir\n\n");
        	
			break;
    	}

    	// Kart iade mesajý
    	printf("Kartiniz Basariyla Iade Edilmistir\n\n");
    	printf("Iyi Gunler Yine Bekleriz");

    return 0;
}
