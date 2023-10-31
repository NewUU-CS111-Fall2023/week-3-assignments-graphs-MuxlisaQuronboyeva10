#include <iostream>
#include <vector>

using std::cin, std::cout, std::string, std::endl;

int main() {
    long first, last, counter = 1;
    std::vector<long> v1;
    cin >> first >> last;
    while (first < last) {
        ++counter;
        v1.push_back(last);
        if (last % 2 == 0) {
            last /= 2;
        }
        else if (last % 10 == 1) {
            last--;
            last /= 10;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    v1.push_back(last);
    if (first == last) {
        cout << "YES" << endl;
        cout << counter << endl;
        cout << v1.at(v1.size() - 1);
        for (int i = v1.size() - 2; i >= 0; i--) {
            cout << " " << v1.at(i);
        }
    }
    else {
        cout << "NO";
    }
}
