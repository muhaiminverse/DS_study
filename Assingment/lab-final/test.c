#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // array of string words
    string words[] = {"apple", "cherry", "banana","date"};

    // create a vector to store the ASCII values
    vector<int> ascii_values;

    // iterate over the words array and extract the ASCII value of the first character
    for (int i = 0; i < sizeof(words) / sizeof(words[0]); i++) {
        int ascii_value = int(words[i][0]);  // extract ASCII value of first character
        ascii_values.push_back(ascii_value); // add the ASCII value to the vector
    }

    // print the ASCII values
    for (int i = 0; i < ascii_values.size(); i++) {
        cout << ascii_values[i] << " ";
    }
    cout << endl;

    return 0;
}

