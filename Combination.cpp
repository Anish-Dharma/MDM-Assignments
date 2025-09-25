#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

//Combination(nCr)
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int students = 20;
    int size = 3;

    long long total = combination(students, size);

    cout << "Number of different teams of 3 students: " << total << endl;

    return 0;
}
