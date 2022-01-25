#include <iostream>
#include <string>
#define MAX 10

using namespace std;

struct Library {
    int noOfReservations = 3;
    string name;
    int number;

    void printReservations() {
        for (int i = 0; i < MAX; i++) {
            cout << i << endl;
        }
    }
};
int main(){
  Library l[2];


  l.printReservations();


  return 0;
}
