#include <iostream>
#include <cstdlib>

#include "fisher_yates.h"

using namespace std;

int main() {
    string n_string;
    cout << "Enter the number of open-parens: " << endl;
    cin >> n_string;

    int n = stoi(n_string);

    // cout << n << endl;

    int array_values[2*n];

    for (int i=0; i < n; i++) {
        array_values[i] = 1;
    }

    for (int i=0; i < n; i++) {
        array_values[i+n] = -1;
    }

    print_array(array_values, 2*n);


    srand(2024);

    int non_pos_prefix_sums=0;
    int non_neg_prefix_sums=0;

    int iterations=100000;
    for (int i=0; i < iterations; i++) {
        fisher_yates(array_values, 2*n, rand);
        print_array(array_values, 2*n);

        if (non_neg_prefix_sum(array_values, 2*n)) {
            non_neg_prefix_sums++;
            //cout << "VALID LIST ABOVE" << endl;
        }
        if (non_pos_prefix_sum(array_values, 2*n)) non_pos_prefix_sums++;
    }

    cout << "Valid parenthesizations: " << non_neg_prefix_sums << endl;
    cout << "Reverse-valid parenthesizations: " << non_pos_prefix_sums << endl;
    cout << "Total trials: " << iterations << endl;

    cout << "Valid parenthesizations proportion: " << (float)non_neg_prefix_sums/iterations << endl;


    return 0;
}