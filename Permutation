#include <iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

//Permutation(nPr)
int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

//Combination(nCr)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int participants = 12;

    //Medals
    int medal = permutation(participants, 3);

    //Certificates
    int certificate = combination(participants - 3, 2);

    int total = medal * certificate;

    cout << "Number of ways to arrange top 5 participants: " << total << endl;

    return 0;
}
