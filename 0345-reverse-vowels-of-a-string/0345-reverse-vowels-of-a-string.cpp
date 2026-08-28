class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // s[i] aur s[j] dono vowel hain
            if ((s[i] == 65 || s[i] == 69 || s[i] == 73 ||
                 s[i] == 79 || s[i] == 85 ||
                 s[i] == 97 || s[i] == 101 || s[i] == 105 ||
                 s[i] == 111 || s[i] == 117) &&

                (s[j] == 65 || s[j] == 69 || s[j] == 73 ||
                 s[j] == 79 || s[j] == 85 ||
                 s[j] == 97 || s[j] == 101 || s[j] == 105 ||
                 s[j] == 111 || s[j] == 117)) {

                swap(s[i], s[j]);
                i++;
                j--;
            }

            // s[i] vowel hai, s[j] vowel nahi hai
            else if (s[i] == 65 || s[i] == 69 || s[i] == 73 ||
                     s[i] == 79 || s[i] == 85 ||
                     s[i] == 97 || s[i] == 101 || s[i] == 105 ||
                     s[i] == 111 || s[i] == 117) {

                j--;
            }

            // s[i] vowel nahi hai
            else {
                i++;
            }
        }

        return s;
    }
};