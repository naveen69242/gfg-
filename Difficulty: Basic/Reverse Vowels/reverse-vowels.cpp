class Solution {
public:
    string modify(string& s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // i ko next vowel par le jao
            while (i < j &&
                  s[i] != 'a' && s[i] != 'e' &&
                  s[i] != 'i' && s[i] != 'o' &&
                  s[i] != 'u') {
                i++;
            }

            // j ko previous vowel par le jao
            while (i < j &&
                  s[j] != 'a' && s[j] != 'e' &&
                  s[j] != 'i' && s[j] != 'o' &&
                  s[j] != 'u') {
                j--;
            }

            // Dono vowels swap karo
            swap(s[i], s[j]);

            i++;
            j--;
        }

        return s;
    }
};