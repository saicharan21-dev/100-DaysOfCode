class solution{
  public:
    int lengthOfLastWord(string str){
        stringstream iss(str);
        string word,lastWord;
        while(iss>>word){
          lastWord=word;
        }
      return lastWord.length();
    }
};
