//The Idea is to use a stack and push elements into the stack one by one and check if the top element is 

class Solution {
public:
    bool isValid(string str){
	stack<char>s;
	for(int i=0;i<str.length();i++){
		if(s.empty()){
			s.push(str[i]);
		}
		else if((s.top()=='('&& str[i]==')')
				||(s.top()=='{'&&str[i]=='}')
				||(s.top()=='['&&str[i]==']')) {
					s.pop();
				}
		else{
			s.push(str[i]);
		}
				
	}
	if(s.empty()){
		return true;
	}
	return false;
}
};
