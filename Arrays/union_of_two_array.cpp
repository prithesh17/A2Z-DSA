#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
    for (int element : v) {
        cout << element << " ";
    }
    cout << endl;
}

vector<int> union_of_array(vector<int> a, vector<int> b) {
    int i = 0;
    int j = 0;
    vector<int> result;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
        }
        else {
            if (result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i]) {
            result.push_back(a[i]);
        }
        i++;
    }
    while (j < b.size()) {
        if (result.empty() || result.back() != b[j]) {
            result.push_back(b[j]);
        }
        j++;
    }
    return result;
}

int main() {

    int m, n;
    cin >> m;
    vector<int> a;
    for (int i = 0; i < m; i++) {
        int value;
        cin >> value;
        a.push_back(value);
    }
    cin >> n;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        b.push_back(value);
    }

    vector<int> result = union_of_array(a, b);

    print(result);

    return 0;
}
