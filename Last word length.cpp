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
// The Idea is to use stringstream from C++ library to break the string and store it in word and then store it to another variable lastWord which has the latest word from the string
