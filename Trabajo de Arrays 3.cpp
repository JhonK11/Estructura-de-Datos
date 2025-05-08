#include <iostream>
using namespace std;

int main() {
    int nums[10];
    
    for (int i = 0; i < 10; i++)
        cin >> nums[i];

    int ultimo = nums[9];
    for (int i = 9; i > 0; i--)
        nums[i] = nums[i - 1];
    nums[0] = ultimo;

    for (int i = 0; i < 10; i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}

