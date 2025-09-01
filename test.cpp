#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n = 10;
    int myList[n];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        int randomNumber = rand() % 100;
        cout << randomNumber << " ";
        myList[i] = randomNumber;
    }

    cout << endl;
    int *p = myList;
    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    
    return 0;
}