#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dna_seq;
    cin >> dna_seq;

    int left = 0;
    int right = 1;
    int max_rep = 1;

    while (right < dna_seq.length()) {
        if (dna_seq[right] != dna_seq[left]) {
            left = right;
        } else {
            max_rep = max(max_rep, right - left + 1);
        }
        right++;
    }

    // Update max_rep again after the loop for the last repetition
    max_rep = max(max_rep, right - left);

    cout << max_rep << endl;

    return 0;
}
