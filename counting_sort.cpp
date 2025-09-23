#include <iostream>
#include <ctime>

using namespace std;

int* generateRandomList(int n, int interval) {
    int* myList = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        myList[i] = rand() % interval; 
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

void countingSort(int *list, int n) {
    int maxElement = 0;

    for(int i = 0; i < n; i++) {
        if(list[i] > maxElement) {
            maxElement = list[i];
        }
    }

    int* auxList = new int[maxElement + 1]();

    for(int i = 0; i < n; i++) {
        auxList[list[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= maxElement; i++) {
        while(auxList[i] > 0) {
            list[index] = i;
            index++;
            auxList[i]--;
        }
    }

    delete[] auxList;
}

int main() {
    int n = 20;
    int interval = 1000;
    int *myList = generateRandomList(n, interval);
    printList(myList, n);

    countingSort(myList, n);
    printList(myList, n);
    return 0;
}