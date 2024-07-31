// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Input: s = "()[]{}"
// Output: true

bool matching(char a, char b)
    {
        return((a=='(' && b==')') ||
              (a=='{' && b=='}')||
              (a=='[' && b==']'));
    }
    
    bool isValid(string str) {
        stack<char>s;
        
        for(char x: str)
        {
            if(x=='(' || x=='{' || x=='[')
                s.push(x);
            else
            {
                if(s.empty()==true) // for case - (( )))
                    return false;
                    
                if(matching(s.top(),x) ==false)
                    return false;
                else
                    s.pop();
            }
        }
        
        return(s.empty()); // for case - ((( ))
    }
