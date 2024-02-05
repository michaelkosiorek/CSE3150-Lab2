#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    for (int i=0; i<20; i++) {
        int random_number = rand() % 11;
        cout << random_number << endl;
    }
    
    return 0;
}