class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        int n = s.size();
         for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                Stack.push(s[i]);
            }
            else
            {
                if(Stack.empty())
                {
                    return false;
                }
                else
                {
                    char temp = Stack.top();
                    if(temp == '(' && s[i] == ')')
                    {
                        Stack.pop();
                    }
                    else if(temp == '[' && s[i] == ']')
                    {
                        Stack.pop();
                    }
                    else if(temp == '{' && s[i] == '}')
                    {
                        Stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return Stack.empty()?true:false;
    }
};
