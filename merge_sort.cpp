#include <iostream>
#include <ctime>

using namespace std;

int* generateRandomList(int n) {
    int* myList = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        myList[i] = rand() % 100; 
    }

    return myList;
}

void printList(int* list, int n) {
    for (int i = 0; i < n; i++) {
        cout << list[i] << " ";
    }

    cout << endl;
}

void swap(int *l, int *r) {
    int temp = *l;
    *l = *r;
    *r = temp;
}

void merge(int *list, int left, int mid, int right) {
    // Calcula o tamanho das sublistas esquerda (n1) e direita (n2)
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Cria arrays temporários para armazenar os elementos das sublistas
    int* L = new int[n1];
    int* R = new int[n2];

    // Copia os elementos correspondentes da lista original para as sublistas
    for (int i = 0; i < n1; i++) L[i] = list[left + i]; // sublista esquerda
    for (int i = 0; i < n2; i++) R[i] = list[mid + 1 + i]; // sublista direita

    // i percorre a sublista esquerda, j percorre a direita, k percorre a lista original
    int i = 0, j = 0, k = left;

    // Intercala os elementos das duas sublistas de volta na lista original em ordem
    while (i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            list[k] = L[i];
            i++;
        } else {
            list[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia qualquer elemento restante da sublista esquerda
    while(i < n1) {
        list[k] = L[i];
        i++; k++;
    }
    // Copia qualquer elemento restante da sublista direita
    while(j < n2) {
        list[k] = R[j];
        j++; k++;
    }

    // Libera a memória alocada dinamicamente para as sublistas
    delete[] L;
    delete[] R;
}

void mergeSort(int *list, int left, int right) {
    // Só processa se o segmento tiver pelo menos 2 elementos
    if(left < right) {
        // Calcula o índice do meio para dividir a lista
        int mid = left + (right - left) / 2;

        // Ordena recursivamente a metade esquerda
        mergeSort(list, left, mid);

        // Ordena recursivamente a metade direita
        mergeSort(list, mid + 1, right);

        // Mescla as duas metades ordenadas
        merge(list, left, mid, right);
    }
}

int main() {
    int n = 20;
    int *myList = generateRandomList(n);
    printList(myList, n);

    mergeSort(myList, 0, n - 1);
    printList(myList, n);
    return 0;
}