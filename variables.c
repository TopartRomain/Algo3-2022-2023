#include <stdio.h>

int main() {
    int n, nombre, i;
    int res = 0;
    printf("Combien de nombres dans l\'addition ? ");
    scanf("%d", &n);
    if(n <=1) {
        printf("Vous devez choisir au moins 2 nombres !");
    }
    return 0;

    for(i=0;i<n;i++) {
        printf("Entrer une valeur : ");
        scanf("%d", &nombre);
        res = res + nombre;
    }
    printf("La somme totale est de : %d", res);
}