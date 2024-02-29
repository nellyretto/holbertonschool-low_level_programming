#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int concatenatedSize = size1 + size2;
    int concatenatedArray[concatenatedSize];

    // Copiar array1 a concatenatedArray
    for(int i = 0; i < size1; i++) {
        concatenatedArray[i] = array1[i];
    }

    // Copiar array2 a concatenatedArray, después del último elemento de array1
    for(int i = 0; i < size2; i++) {
        concatenatedArray[size1 + i] = array2[i];
    }

    // Imprimir el array concatenado
    for(int i = 0; i < concatenatedSize; i++) {
        printf("%d ", concatenatedArray[i]);
    }

    return 0;
}

