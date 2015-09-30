#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    int speed = 5;
//    while (speed < 60)
//    {
//        speed += 5;
//    }
//    cout << speed << endl;
//    do {
//        speed +=10;
//    }
//    while(speed < 60);
//    cout << speed << endl;

//    srand(time(0));
//    int n = rand() % 100 + 1;
//    int number;
//
//    do {
//        cout << "Input number:";
//
//        cin >> number;
//        if (number>n) {
//            cout << "less" << endl;
//        }
//        else if (number<n) {
//            cout << "more" << endl;
//        }
//    } while (number != n);
//    cout << "Yes!" << endl;
    int i=0;
    for (;;) {
        if (i>=10) break;
        cout << i << " ";
        i++;
    }

    for (int j = 0; j<20; ++j) {

    }
    return 0;
}