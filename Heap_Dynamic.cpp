#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    for (int i = 0; i < 5; ++i)
        arr.push_back(i * 3);

    for (int i : arr)
        cout << i << " ";
    return 0;
}
