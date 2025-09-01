#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n = 20;
    int myList[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        myList[i] = rand() % 100; // números aleatórios de 0 a 99
        cout << myList[i] << " ";
    }

    cout << endl;

    int i = 0;
    while(i < n) {
        for (int j = i + 1; j < n; j++) {
            if(myList[j] < myList[i]) {
                int temp = myList[i];
                myList[i] = myList[j];
                myList[j] = temp;
            }
        }
        i++;
    }

    for (int i = 0; i < n; i++) {
        cout << myList[i] << " ";
    }

    cout << endl;

    return 0;
}