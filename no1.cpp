#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "kode : ";
    cin >> N;

    if (N > 0 && (N & (N - 1)) == 0) {
        cout << "ya" << endl; 
    } else {
        cout << "bukan" << endl; 
    }

    return 0;
}