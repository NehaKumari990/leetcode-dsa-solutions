class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // i par vowel nahi hai
            if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                  s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
                  s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                  s[i] == 'U')) {
                i++;
            }

            // j par vowel nahi hai
            else if (!(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||
                       s[j] == 'o' || s[j] == 'u' || s[j] == 'A' ||
                       s[j] == 'E' || s[j] == 'I' || s[j] == 'O' ||
                       s[j] == 'U')) {
                j--;
            }

            // dono vowel hain
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};