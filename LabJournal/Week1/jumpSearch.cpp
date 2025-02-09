#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int linearSearch(const vector<int>& v, int prev, int next, int key) {
    for (int i = prev; i <= next; i++) {
        if (v[i] == key) return i;
    }
    return -1;
}

void jumpSearch(const vector<int>& v, int key) {
    int n = v.size();
    int window_size = sqrt(n);
    int prev = 0, next = window_size - 1;

    while (next < n) {
        if (key <= v[next]) {
            int res = linearSearch(v, prev, next, key);
            if (res >= 0) {
                cout << "Key found at index: " << res << endl;
                return;
            }
        }
        prev = next + 1;
        next = min(next + window_size, n - 1);
    }

    int res = linearSearch(v, prev, n - 1, key);
    if (res >= 0) {
        cout << "Key found at index: " << res << endl;
    } else {
        cout << "Key not found!" << endl;
    }
}

int main() {
    vector<int> v;
    int n, key;
    
    cout << "Enter number of elements: ";
    cin >> n;
    v.resize(n);
    
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Enter key to search: ";
    cin >> key;

    jumpSearch(v, key);
    return 0;
}
