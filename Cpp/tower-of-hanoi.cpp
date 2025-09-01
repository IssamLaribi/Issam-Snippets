#include <iostream>
using namespace std;

void towerOfHanoi(int n, int start, int dest) { 
    if (n == 1)
    {
        cout << start << " to " << dest << "\n";
        return;
    }
    towerOfHanoi(n - 1, start, 6 - (start + dest));
    cout << start << " to " << dest << "\n";
    towerOfHanoi(n - 1, 6 - (start + dest), dest);
}
