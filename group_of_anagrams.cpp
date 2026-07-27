/*
==============================================================================
GROUP ANAGRAMS: SORTING vs CHARACTER COUNT
==============================================================================

| Feature               | Sorting Approach                          | Character Count Approach                     |
|-----------------------|-------------------------------------------|----------------------------------------------|
| Key Used              | Sorted string ("eat" -> "aet")            | Frequency string ("#1#0#0...")               |
| How it Works          | Sort each string and use as map key       | Count letters and build frequency key        |
| Time per String       | O(k log k)                                | O(k + 26) ≈ O(k)                             |
| Overall Time          | O(n * k log k)                            | O(n * k)                                     |
| Space Complexity      | O(n * k)                                  | O(n * k)                                     |
| Extra Work            | Sorting                                   | Counting + building key                      |
| Character Support     | Any character set                         | Lowercase English letters only               |
| Code Simplicity       | Short, clean, easy                        | Slightly longer                              |
| Interview Preference  | Most common solution                      | Optimal solution                             |
| Best For              | General-purpose problems                  | Fixed alphabet problems                      |

Where:
n = Number of strings
k = Average length of each string

==============================================================================
WHICH ONE SHOULD YOU USE?
==============================================================================

✔ Coding Interview
    -> Sorting Approach
       - Easier to write
       - Less error-prone
       - Accepted by almost every interviewer.

✔ Want the Best Time Complexity
    -> Character Count Approach
       - O(n * k)
       - Avoids sorting.

✔ Strings contain Uppercase, Digits, Symbols, or Unicode
    -> Sorting Approach
       - Works for any character set.

✔ Strings contain only lowercase English letters
    -> Character Count Approach
       - Fastest and most optimal.

Rule of Thumb:
- Sorting = Simpler and the most commonly expected interview solution.
- Character Count = Faster and the optimal solution when the alphabet size is fixed.

==============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

// APPROACH 1 : SORTING
vector<vector<string>> groupAnagramsBySorting(vector<string>& strs) {

    unordered_map<string, vector<string>> mpp;

    for (auto& s : strs) {
        string key = s;
        sort(key.begin(), key.end());   // Create canonical form
        mpp[key].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto it : mpp) {
        ans.push_back(it.second);
    }

    return ans;
}

// APPROACH 2 : CHARACTER COUNT
vector<vector<string>> groupAnagramsByCharCount(vector<string>& strs) {

    unordered_map<string, vector<string>> mpp;

    for (auto& s : strs) {
        int count[26] = {0};

        // Count frequency of each character
        for (char c : s) {
            count[c - 'a']++;
        }

        // Build a unique key using frequencies
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += "#" + to_string(count[i]);
        }

        mpp[key].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto& it : mpp) {
        ans.push_back(it.second);
    }

    return ans;
}

void printGroups(const vector<vector<string>>& groups) {
    for (auto& group : groups) {
        cout << "[ ";
        for (auto& s : group) cout << s << " ";
        cout << "]" << endl;
    }
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<string> strs1 = strs;
    vector<string> strs2 = strs;

    cout << "Approach 1 (Sorting):" << endl;
    printGroups(groupAnagramsBySorting(strs1));

    cout << "\nApproach 2 (Character Count):" << endl;
    printGroups(groupAnagramsByCharCount(strs2));

    return 0;
}
