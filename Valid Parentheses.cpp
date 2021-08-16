char close(char ch){
        if(ch == '(') return ')';
        else if(ch == '[') return ']';
        else return '}';
    }
    bool isValid(string s) {
        vector<char> stack;
        for(char ch: s){ // for every paranthesis
		 // if it is an open parenthesis put it in the stack
            if(ch == '(' || ch == '[' || ch == '{') 
                stack.push_back(ch);
            else{
			// if it is a closed parenthesis and the last pararenthesis in the stack is 
			// the open one of the same type, pop the last element of the stack
                if(!stack.empty() && close(stack.back()) == ch)
                    stack.pop_back();
                else // else the parentheses do not match!
                    return false;
            }
        }
        
        return stack.empty(); // if there aren't paranthesis left open the string is valid
    }
