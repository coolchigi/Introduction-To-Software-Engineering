#include <iostream>

using namespace std;
void double(int num);


int main(){
    int num;
    cout <<"Enter an integer: ";
    cin >> num;
    double(num);
    cout << "Your number doubled is: " <<num <<endl;
}

void double(int num){
    num = num * 2;
}
















// #include <iostream>
//
// using namespace std;
//
// int x = 10;
//
// namespace first {
//     int x = 12;
//
//     namespace second {
//         int x = 14;
//     }
// }
//
// int main(){
//     int x = 16;
//     cout << first::second::x;
//     return 0;
// }
