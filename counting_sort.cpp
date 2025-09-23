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