#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

// Iniciando matriz aleatoria
void Matriz_Aleatoria(int matriz[SIZE][SIZE]) {
    srand(time(0));

    // Llenando matriz por medio del bucle
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 2; // Acá se divide para generar los 1s y los 0s
        }
    }
}

//Funcion para imprimir la matriz de tamaño seleccionado con un bucle para recorrerla  
void Imprimiendo_matriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Inicializando funcion y variables para iniciar la busqueda de secuencias 
int Buscando_secuencia(int matriz[SIZE][SIZE]) {
    int Secuencia_máxima = 0, Secuencia_encontrada = 0;

    // Buscando secuencias por medio de la estructura de control for, comparando además con la máxima o la actual
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == 1) {
                Secuencia_encontrada++;
                if (Secuencia_encontrada > Secuencia_máxima) {
                    Secuencia_máxima = Secuencia_encontrada;
                }
            } else {
                Secuencia_encontrada = 0;
            }
        }
    }

    return Secuencia_máxima;
}

int main() {
    int matriz[SIZE][SIZE];

    // Llenar la matriz con valores aleatorios
    Matriz_Aleatoria(matriz);

    // Imprimir la matriz generada
    printf("Matriz generada aleatoriamente:\n");
    Imprimiendo_matriz(matriz);

    // Encontrar la longitud de la secuencia más larga, llamado de la funcion e impresión 
    int Secuencia_máxima = Buscando_secuencia(matriz);
    printf("La longitud de la secuencia de 1s más larga es: %d\n", Secuencia_máxima);

    return 0;
}

