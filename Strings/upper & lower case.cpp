// You can achieve this by counting the number of uppercase and lowercase characters in the string and 
// then converting the string to either all uppercase or all lowercase based on the counts.

// using c++ 
string convert_string(string &s) {
    int upper, lower = 0;
    for(char ch: s) {
        if(isupper(ch)) upper++;
    }
    for(char ch: s) {
        if(islower(ch)) lower++;
    }
    
    string result = s;
    
    if(upper > lower) {
        for(char& ch: result)  
            ch = toupper(ch); 
    }
    else {
        for(char& ch: result) 
            ch = tolower(ch);
    }
    
    return result;
}

// using python
def solve(s):
    upper = 0
    lower = 0
    for ch in s:
        if ch.isupper(): upper += 1
        else: lower += 1
            
    
    if(upper > lower):
        result = s.upper()
    else:
        result = s.lower()
    
    return result
        

if __name__ == "__main__":
    s = input("Enter string: ") 
    print(solve(s))
