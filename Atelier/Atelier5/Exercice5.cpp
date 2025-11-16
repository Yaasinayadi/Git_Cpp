#include <iostream>
using namespace std;

template <typename T>
T carre(T num) {
    return num * num;
}

int main() {
    int a = 5;
    float b = 3.5;
    cout << "CarreI: " << carre(a) << endl;
    cout << "CarreF: "  << carre(b) << endl;
    return 0;
}