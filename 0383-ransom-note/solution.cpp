class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char,  int> hash;
        for (int i = 0; i < magazine.size(); i++) hash[magazine[i]]++;
        for (int i = 0; i < ransomNote.size(); i++) {
            if (hash[ransomNote[i]] > 0) hash[ransomNote[i]]--;
            else return false;
        }
        return true;
    }
};
