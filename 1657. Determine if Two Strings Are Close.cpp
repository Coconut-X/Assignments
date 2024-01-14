/*Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

APPROACH:
1.strings should be of same length
2. same unique elements
3. same frequency set(same unique element of each word can have diff frequency)

*/


class Solution {
public:
    vector<char> w1, w2;
    vector<int> f1, f2;
void calculateFrequency(const string& word, vector<int>& f) 
{
    f.assign(26, 0);

    for (char ch : word) 
        if (isalpha(ch) && islower(ch)) 
            f[ch - 'a']++;
        
    sort(f.begin(), f.end());
}
void put_and_sort(vector<char>& w, string word)
{
    for (int i = 0; i < word.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < w.size(); j++)
        {
            if (word[i] == w[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)    w.push_back(word[i]);
    }
    sort(w.begin(), w.end());
}

bool closeStrings(string word1, string word2)
{
    calculateFrequency(word1, f1), calculateFrequency(word2, f2);

    if (word1.length() != word2.length()) return false;
    
    put_and_sort(w1, word1),put_and_sort(w2, word2);

    return (w1 == w2 && f1==f2);
}
};
