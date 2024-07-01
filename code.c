#include <stdio.h>

int main() {
    int array[15] = {5, 3, 1, 1, 56, 6, 3456, 8, 9, 0, 3, 0, 7, 0, 8};
    int x, summe = 0;
    
    printf("Bitte geben Sie eine Grenze zwischen 0 und 14 ein:\n");
    scanf("%d", &x);
    
    for (int i = 0; i <= x; i++) {
        summe += array[i];
    }
    
    printf("Die Summe der Elemente bis zur Grenze %d beträgt %d\n", x, summe);
    
    return 0;
}
