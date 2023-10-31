class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) 
    {
        if(s1.size()==s2.size())
            return s1==s2;
        vector<string> a1;
        vector<string> a2;
        stringstream is1(s1);
        string str;
        while(is1>>str)
        {
            a1.push_back(str);
        }
        stringstream is2(s2);
        while(is2>>str)
        {
            a2.push_back(str);
        }
        int start1=0,start2=0,end1=a1.size()-1,end2=a2.size()-1;
        while(start1<=end1&&start2<=end2)
        {
            if(a1[start1]==a2[start2])
            {
                start1++;
                start2++;
            }
            else if(a1[end1]==a2[end2])
            {
                end1--;
                end2--;
            }
            else
                return false;
        }
        return true;
        
   
