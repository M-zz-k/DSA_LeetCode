class Solution {
public:
    bool isValid(string s) {
        stack<char> openBrackets;
        for(char c : s){
            if (c == '(' || c == '{' || c == '['){
                openBrackets.push(c);
            }
            else{
                if(openBrackets.empty()){
                    return false;
                }
                char top = openBrackets.top();
                if (c == ')' && top != '(' || c == '}' && top != '{' || c == ']' && top != '['){
                    return false;
                }
                openBrackets.pop();
            }
        
        }
        return openBrackets.empty();
    }
};