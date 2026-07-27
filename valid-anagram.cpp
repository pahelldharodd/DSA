#include <bits/stdc++.h>
using namespace std;

// APPROACH : CHARACTER COUNT
bool isAnagramUsingCharCount(string s, string t) {
    int count[26] = {0};
    if (s.length() != t.length()) {
        return false;
    }
    for (int i = 0; i < s.length(); i++) {
        count[s.at(i) - 'a']++;
        count[t.at(i) - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    cout << boolalpha << isAnagramUsingCharCount("anagram", "nagaram") << endl;
    cout << boolalpha << isAnagramUsingCharCount("rat", "car") << endl;

    return 0;
}
