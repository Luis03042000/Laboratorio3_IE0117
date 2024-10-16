#include <stdio.h>

// Se inicializa una función y las variables 
int suma_diagonales(int n, int matriz[n][n]) {
    int diagonal_principal = 0, diagonal_secundaria = 0;

    // Estructura de control donde se recorre la matriz y se realiza la suma de las diagonales 
    for (int i = 0; i < n; i++) {
        diagonal_principal += matriz[i][i];              
        diagonal_secundaria += matriz[i][n - i - 1];     
    }

    int suma_total = diagonal_principal + diagonal_secundaria;

    // En caso de que la matriz tenga un tamaño impar, se le resta el dato central para que no se sume dos veces
    if (n % 2 == 1) {
        suma_total -= matriz[n / 2][n / 2];
    }

    return suma_total;
}

// Matrices de ejemplo 
int main() {
    
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Suma de las diagonales (3x3): %d\n", suma_diagonales(3, matriz1));

    
    int matriz2[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("Suma de las diagonales (4x4): %d\n", suma_diagonales(4, matriz2));

    
    int matriz3[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    printf("Suma de las diagonales (5x5): %d\n", suma_diagonales(5, matriz3));

    return 0;
}

