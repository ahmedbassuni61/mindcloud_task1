#include <iostream>
using namespace std;

int main() {
    int size, number;
    cin >> size;
    for (int i = 0; i < size; ++i) {
        cin >> number;
        cout << number / 2 << endl;
    }
    return 0;
}
