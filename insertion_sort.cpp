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

void insertionSort(int *list, int size) {
    for(int i = 1; i < size; i++) {
        int temp = list[i];
        int j = i - 1;

        while(j >= 0 && list[j] > temp) {
            list[j + 1] = list[j];
            j--;
        }
        
        list[j + 1] = temp;
    }
}

int main() {
    int n = 20;
    int *myList = generateRandomList(n);
    printList(myList, n);

    insertionSort(myList, n);
    printList(myList, n);

    delete[] myList;

    return 0;
}

