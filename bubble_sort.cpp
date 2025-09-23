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

void bubbleSort(int *list, int size) {
    bool swapped = false;
    int limit = size - 1;

    while (true) {
        swapped = false;

        for (int i = 0; i < limit; i++) {
            if(list[i + 1] < list[i]) {
                swap(&list[i], &list[i + 1]);
                swapped = true;
            }
        }

        limit--;

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n = 20;
    int interval = 1000;
    int *myList = generateRandomList(n, interval);
    printList(myList, n);

    bubbleSort(myList, n);
    printList(myList, n);

    delete[] myList;

    return 0;
}

