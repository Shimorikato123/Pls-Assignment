#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];  // Heap allocation with fixed size

    for (int i = 0; i < 5; ++i)
        arr[i] = i * 2;

    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";

    delete[] arr;  // Clean up
    return 0;
}

