#include <iostream>
#include <cstdlib>

#include "fisher_yates.h"

using namespace std;

int main() {
    string n_string;
    cout << "Enter the number of open-parens: " << endl;
    cin >> n_string;

    int n = stoi(n_string);

    cout << n << endl;

    int array_values[2*n];

    for (int i=0; i < n; i++) {
        array_values[i] = 1;
    }

    for (int i=0; i < n; i++) {
        array_values[i+n] = -1;
    }

    print_array(array_values, 2*n);

    return 0;
}