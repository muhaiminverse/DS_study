#include <iostream>
#include <string>

using namespace std;

string shift_even_chars(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            result += (char)(((s[i] - 'a' + 1) % 26) + 'a');
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string output = shift_even_chars("zfth");
    cout << output << endl;  // Output: "afuh"
    return 0;
}

