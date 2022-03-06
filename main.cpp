#include <string>
#include <iostream>

using namespace std;

bool palindrome(string word) {
    string input = word;
    string input_reverse;
    for(int i = input.length()-1;i >= 0;i--) {
        input_reverse+=input[i];
    }
    if(input == input_reverse) {
        return true;
    }
    else {
        return false;
    }
}

int main(int argc, const char * argv[]) {
    cout << palindrome("ABBA") << endl;
    cout << palindrome("REITTIER") << endl;
    cout << palindrome("KEINPALINDROME") << endl;
}
