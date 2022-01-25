#include <iostream>

using namespace std;

struct Library {
    int noOfReservations = 3;

    void printReservations() {
        for (int i = 0; i < noOfReservations; i++) {
            cout << i << endl;
        }
    }
};
