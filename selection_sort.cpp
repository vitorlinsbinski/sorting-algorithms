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

void selectionSort(int* list, int n) {
    for(int i = 0; i < (n - 1); i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if(list[j] < list[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = list[i];
            list[i] = list[minIndex];
            list[minIndex] = temp;
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
    int *myList = generateRandomList(n);
    printList(myList, n);

    selectionSort(myList, n);
    printList(myList, n);

    return 0;
}

