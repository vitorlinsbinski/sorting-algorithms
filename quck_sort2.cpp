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

void quickSort(int *list, int n) {
    if (n <= 1) return;

    int pivot = list[0];
    int i = 1, j = n - 1;

    while (true) {
        while (i < n && list[i] < pivot) {
            i++;
        }

        while (j > 0 && list[j] > pivot) {
            j--;
        }

        if (i > j) {
            swap(&list[0], &list[j]);
            break;
        } else {
            swap(&list[i], &list[j]);
            i++;
            j--;
        }
    }

    quickSort(list, j);
    quickSort(list + j + 1, n - j - 1);
}

int main() {
    int n = 20;
    int interval = 1000;
    int *myList = generateRandomList(n, interval);
    printList(myList, n);

    quickSort(myList, n);
    printList(myList, n);
    return 0;
}