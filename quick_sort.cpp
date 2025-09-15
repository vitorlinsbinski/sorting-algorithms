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

void quickSort(int *list, int n) {
    if(n <= 1) return;

    int pivot = list[n - 1];
    int i = -1;

    for(int j = 0; j < n - 1; j++) {
        if(list[j] <= pivot) {
            i++;
            swap(list[i], list[j]);
        } 
    }

    swap(list[i + 1], list[n - 1]);

    int p = i + 1;

    quickSort(list, p);
    quickSort(list + p + 1, n - p - 1);
}

int main() {
    int n = 20;
    int *myList = generateRandomList(n);
    printList(myList, n);

    quickSort(myList, n);
    printList(myList, n);
    return 0;
}