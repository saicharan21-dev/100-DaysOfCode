class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream iss(s);
        string word,lastWord;
        while(iss>>word){
           lastWord=word;
        }
        return lastWord.length();
    }
};
