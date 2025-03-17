#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> names = {"John", "Jane", "Bob"};
    for (auto name : names) {
        cout << name << endl;
    }
}
