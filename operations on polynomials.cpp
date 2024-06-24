#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Polynomial node
typedef struct PolynomialNode {
    int coefficient;
    int exponent;
    struct PolynomialNode* next;
} PolynomialNode;

// Starting node for linked list
PolynomialNode* start1 = NULL;
PolynomialNode* start2 = NULL;
PolynomialNode* result = NULL;

// Function to generate a random number
int randomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to create a new node
PolynomialNode* createNewNode(int coefficient, int exponent) {
    PolynomialNode* newNode = (PolynomialNode*)malloc(sizeof(PolynomialNode));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node to the linked list
void addNode(PolynomialNode** start, int coefficient, int exponent) {
    PolynomialNode* iter = *start;
    PolynomialNode* newNode = createNewNode(coefficient, exponent);
    if (iter == NULL) {
        *start = newNode;
    } else {
        while (iter->next != NULL) {
            iter = iter->next;
        }
        iter->next = newNode;
    }
}

// Function to randomly generate polynomials and create the linked list
void generatePolynomials() {
    // Creating the first polynomial
    int degree1 = randomNumber(0, 6);
    for (int i = 0; i <= degree1; i++) {
        int coefficient = randomNumber(0, 10);
        if (coefficient != 0) {
            addNode(&start1, coefficient, degree1 - i);
        }
    }

    // Creating the second polynomial
    int degree2 = randomNumber(0, 6);
    for (int i = 0; i <= degree2; i++) {
        int coefficient = randomNumber(0, 10);
        if (coefficient != 0) {
            addNode(&start2, coefficient, degree2 - i);
        }
    }

    printf("Polinomlar basariyla olusturuldu.");
}

// Function to display polynomials
void displayPolynomials(PolynomialNode* start) {
    PolynomialNode* iter = start;
    if (iter == NULL) {
        printf("Henüz polinom bulunmamaktadýr.\n");
        return;
    }

    while (iter != NULL) {
        if (iter->exponent == 0) {
            printf("%d ", iter->coefficient);
        } else {
            if (iter->coefficient != 1) {
                printf("%dx", iter->coefficient);
            } else {
                printf("x");
            }

            if (iter->exponent != 1) {
                printf("^%d ", iter->exponent);
            } else {
                printf(" ");
            }
        }
        
        iter = iter->next;
        if (iter != NULL) {
            printf("+ ");
        }
    }
    printf("\n");
}

// Function to delete terms according to degree
void deleteByDegree(PolynomialNode** start, int degree) {
    PolynomialNode* iter = *start;
    PolynomialNode* previous = NULL;
    int termExists = 0; // Variable to check if the term exists

    while (iter != NULL) {
        if (iter->exponent == degree) {
            termExists = 1; // Term found
            if (iter == *start) {
                *start = iter->next;
                free(iter);
                iter = *start;
            } else {
                previous->next = iter->next;
                free(iter);
                iter = previous->next;
            }
        } else {
            previous = iter;
            iter = iter->next;
        }
    }

    // If the term with the specified degree is not found, print a message
    if (!termExists) {
        printf("Belirtilen derecede bir terim bulunmamaktadir.\n");
    }
    else{
    	printf("Belirtilen derecedeki terim basariyla slindi.\n");
	}
}

double power(int base,int exponent){
	
	double result = 1;
	int i = exponent;
	
	while(i!=0){
		result *= base;
		i--;
	}
	return result;
}

// Function to calculate the value of a polynomial at a given x
double calculatePolynomial(PolynomialNode* root, double x) {
    double result = 0.0;
    PolynomialNode* iter = root;

    // Calculate the value of the polynomial by traversing each term in the linked list
    while (iter != NULL) {
        result += iter->coefficient * power(x, iter->exponent);
        iter = iter->next;
    }

    return result;
}

// Function to add polynomials
void addPolynomials() {
    // Variable to hold the total result
    result = NULL;
    
    // Add terms of the first polynomial
    PolynomialNode* iter1 = start1;
    while (iter1 != NULL) {
        // Create a new term and set the coefficient and exponent values
        PolynomialNode* newTerm = createNewNode(iter1->coefficient, iter1->exponent);
        
        // If the result is still null, set the new term as the result
        if (result == NULL) {
            result = newTerm;
        } else {
            // Find the appropriate term in the result polynomial and add the coefficients
            PolynomialNode* resultIter = result;
            PolynomialNode* previousResult = NULL;
            while (resultIter != NULL && resultIter->exponent > iter1->exponent) {
                previousResult = resultIter;
                resultIter = resultIter->next;
            }
            if (resultIter != NULL && resultIter->exponent == iter1->exponent) {
                // When the term with the same degree is found, add the coefficients
                resultIter->coefficient += iter1->coefficient;
            } else {
                // If the term with the same degree is not found, add the new term to the result
                if (previousResult == NULL) {
                    newTerm->next = result;
                    result = newTerm;
                } else {
                    previousResult->next = newTerm;
                    newTerm->next = resultIter;
                }
            }
        }
        
        // Move to the next term
        iter1 = iter1->next;
    }
    
    // Add terms of the second polynomial
    PolynomialNode* iter2 = start2;
    while (iter2 != NULL) {
        // Create a new term and set the coefficient and exponent values
        PolynomialNode* newTerm = createNewNode(iter2->coefficient, iter2->exponent);
        
        // If the result is still null, set the new term as the result
        if (result == NULL) {
            result = newTerm;
        } else {
            // Find the appropriate term in the result polynomial and add the coefficients
            PolynomialNode* resultIter = result;
            PolynomialNode* previousResult = NULL;
            while (resultIter != NULL && resultIter->exponent > iter2->exponent) {
                previousResult = resultIter;
                resultIter = resultIter->next;
            }
            if (resultIter != NULL && resultIter->exponent == iter2->exponent) {
                // When the term with the same degree is found, add the coefficients
                resultIter->coefficient += iter2->coefficient;
            } else {
                // If the term with the same degree is not found, add the new term to the result
                if (previousResult == NULL) {
                    newTerm->next = result;
                    result = newTerm;
                } else {
                    previousResult->next = newTerm;
                    newTerm->next = resultIter;
                }
            }
        }
        
        // Move to the next term
        iter2 = iter2->next;
    }
    
    // Display the result
    printf("Toplam Polinom: ");
    PolynomialNode* resultIter = result;
    while (resultIter != NULL) {
        if (resultIter->coefficient != 0) {
            if (resultIter->exponent == 0) {
                printf("%d ", resultIter->coefficient);
            } else if (resultIter->exponent == 1) {
                if (resultIter->coefficient == 1) {
                    printf("x ");
                } else {
                    printf("%dx ", resultIter->coefficient);
                }
            } else {
                if (resultIter->coefficient == 1) {
                    printf("x^%d ", resultIter->exponent);
                } else {
                    printf("%dx^%d ", resultIter->coefficient, resultIter->exponent);
                }
            }
            if (resultIter->next != NULL && resultIter->next->coefficient != 0) {
                printf("+ ");
            }
        }
        resultIter = resultIter->next;
    }
    printf("\n");
}

// Main function
int main() {
    srand(time(NULL));

    int choice;
    do {
        printf("\nMenü:\n");
        printf("1. Polinomlari Rastgele Uret ve Bagli Listeyi Olustur\n");
        printf("2. Listele (Polinomal Sekilde Goster)\n");
        printf("3. x Degerine Gore Hesapla\n");
        printf("4. Polinom Derecesine Gore Sil\n");
        printf("5. Polinomlari Topla\n");
        printf("6. Cikis\n");
        printf("Seciminizi yapiniz: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                generatePolynomials();
                break;
                
            case 2:
                if(result != NULL){
                    int subChoice;
                    printf("1. Toplam polinomu goruntule\n");
					printf("2. Rastgele olusturulan polinomlari goruntule\n");
					printf("Seciminizi yapiniz: ");
                    scanf("%d",&subChoice);
                    
                    switch(subChoice){
                        case 1:
                            printf("Toplam fonksiyon: ");
                            displayPolynomials(result);
                            break;
                            
                        case 2:
                            printf("1. Polinom: ");
                            displayPolynomials(start1);
                            printf("2. Polinom: ");
                            displayPolynomials(start2);
                            break;
                        default:
                            printf("Invalid choice...");
                            break;      
                    }
                }
                else{
                    printf("1. Polinom: ");
                    displayPolynomials(start1);
                    printf("2. Polinom: ");
                    displayPolynomials(start2);
                }
                break;
                
            case 3:
                double x;
                printf("x degerini giriniz: ");
                scanf("%lf", &x);
                printf("1. Polinomun degeri: %.2f\n", calculatePolynomial(start1, x));
                printf("2. Polinomun degeri: %.2f\n", calculatePolynomial(start2, x));
                break;
                
            case 4:
                int degree;
                printf("Silinecek terimlerin derecesini giriniz: ");
                scanf("%d", &degree);

                    printf("1. Polinom: ");
                    deleteByDegree(&start1, degree);
                    printf("2. Polinom: ");
                    deleteByDegree(&start2, degree);

                break;
                
            case 5:
                addPolynomials();
                break;
                
            case 6:
                printf("Program kapatýlýyor...");
                break;
                
            default:
                printf("Geçersiz seçim!\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
