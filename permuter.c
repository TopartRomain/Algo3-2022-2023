#include <stdio.h>

int permuter(int *a, int *b) { //fonction qui permute 2 valeurs
    int permutation =*a;
    *a = *b;
    *b = permutation;
    }

int grand(int *c, int *d, int *e, int *resgrand) { //Q4
    if(*c>*d) {
        *resgrand=*c;
    } else if(*d>*e) {
        *resgrand=*d;
    }
    *resgrand=*e;
}

int petit(int *c, int *d, int *e, int *respetit) { //Q4
    if(*d>*c) {
        *respetit=*d;
    } else if(*e>*d) {
        *respetit=*e;
    }
    *respetit=*c;
}

int main() {
    int n; //Q1
    char caractere[20]; //Q2
    printf("Entrer n: "); //Q1
    scanf("%d", &n);
    printf("Entrer le caractere: "); //Q2
    scanf("%s", &caractere);
    printf("L'entier est: %d\n", n); //Q1
    printf("L'adresse de l'entier est: %d\n", &n); //Q1
    printf("La chaine de caracteres est: %s\n", caractere); //Q2
    printf("L'adresse de la chaine de caracteres est: %d\n", &caractere); //Q2

    int a, b;
    printf("Veuillez entrer la valeur du premier entier: \n");
    scanf("%d",&a);
    printf("a avant permutation: %d\n", a); //a avant permutation
    printf("Veuillez entrer la valeur du deuxieme entier: \n");
    scanf("%d",&b);
    printf("b avant permutation: %d\n", b); //b avant permutation

    permuter(&a, &b); //Q3
    printf("a apres permutation : %d\n", a); //a après permutation
    printf("b apres permutation : %d\n", b); //b après permutation

    //Q4
    int c, d, e;
    int resgrand=0;
    int respetit=0;
    printf("Entrer le premier entier: ");
    scanf("%d", &c);
    printf("Entrer le deuxieme entier: ");
    scanf("%d", &d);
    printf("Entrer le troisieme entier: ");
    scanf("%d", &e);

    grand(&c, &d, &e, &resgrand);
    printf("Le plus grand nombre est: %d\n", resgrand);
    petit(&c, &d, &e, &respetit);
    printf("Le plus petit nombre est: %d\n", respetit);
}