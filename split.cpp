#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input = "apple,banana,mango";
    istringstream ss(input);
    string token;
    vector<string> tokens;

    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }

    for ( auto t : tokens) {
        cout << t << endl;
    }

    return 0;
}
