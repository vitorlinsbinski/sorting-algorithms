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

void swap(int *l, int *r) {
    int temp = *l;
    *l = *r;
    *r = temp;
}

void selectionSort(int* list, int n) {
    for(int i = 0; i < (n - 1); i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if(list[j] < list[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            swap(&list[i], &list[minIndex]);
        }
    }
}

void printList(int* list, int n) {
    for (int i = 0; i < n; i++) {
        cout << list[i] << " ";
    }

    cout << endl;
}

int main() {
    int n = 20;
    int interval = 1000;
    int *myList = generateRandomList(n, interval);
    printList(myList, n);

    selectionSort(myList, n);
    printList(myList, n);

    delete[] myList;

    return 0;
}

