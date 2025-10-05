#include <iostream>
#include <ctime>
#include <climits>

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

int chooseMedianBetweenThree(int *list, int l, int h) {
    int mid = (l + h) / 2;

    int a = list[l];
    int b = list[mid];
    int c = list[h];

    if ((a <= b && b <= c) || (c <= b && b <= a))
        return mid;
    else if ((b <= a && a <= c) || (c <= a && a <= b))
        return l;
    else
        return h;
}

void quickSort(int *list, int n) {
    if (n <= 1) return;

    int pivotIndex = chooseMedianBetweenThree(list, 0, n - 1);
    swap(&list[0], &list[pivotIndex]); 

    int pivot = list[0];
    int i = 1, j = n - 1;

    while (true) {
        while (i < n && list[i] < pivot) i++;
        while (j > 0 && list[j] > pivot) j--;

        if (i > j) {
            swap(&list[0], &list[j]); // pivô na posição final
            break;
        } else {
            swap(&list[i], &list[j]);
            i++;
            j--;
        }
    }

    quickSort(list, j);              // esquerda
    quickSort(list + j + 1, n - j - 1); // direita
}

int main() {
    int n = 50;
    int interval = 1000;
    int *myList = generateRandomList(n, interval);
    printList(myList, n);
    cout << endl;
    quickSort(myList, n);
    printList(myList, n);
    return 0;
}