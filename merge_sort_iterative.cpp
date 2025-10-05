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

void merge(int *list, int n, int l, int mid, int h) {
    int i = l;        
    int j = mid + 1; 
    int k = l;        
    int B[n];         

    while(i <= mid && j <= h) {
        if(list[i] < list[j]) {
            B[k++] = list[i++];
        } else {
            B[k++] = list[j++];
        }
    }

    for(; i <= mid; i++) {
        B[k++] = list[i];
    }

    for(; j <= h; j++) {
        B[k++] = list[j];
    }

    for(int x = l; x <= h; x++) {   
        list[x] = B[x];
    }
}


void iterativeMergeSort(int *list, int n) {
    int p, l, h, mid, i;

    for(p = 2; p <= n; p = p*2) {
        for(i = 0; i + p - 1 < n; i = i+p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;

            merge(list, n, l, mid, h);
        }
    }

    if(p / 2 < n) {
        merge(list, n, 0, p/2 - 1, n-1);
    }
}

int main() {
    int n = 20;
    int* list = generateRandomList(n, 100);
    printList(list, n);

    iterativeMergeSort(list, n);
    printList(list, n);

    return 0;
}