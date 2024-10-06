#include <stdio.h>

// Función donde se realiza el factorial de un número 
int factorial(int n) { // Se inicia función
    int i = 1; // Se inicializa el iterador 
    while (n > 1) { // Estructura de control 
        i = i * n; 
        n = n - 1;
    }
    return i;
}

// Se inicializa una nueva función para imprimir y se pide número  
int main() {
    int num;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &num);

    // Estructura de control para imprimir y llamar a la función 
    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        int result = factorial(num);
        printf("El factorial de %d es %d\n", num, result);
    }

    return 0;
}

