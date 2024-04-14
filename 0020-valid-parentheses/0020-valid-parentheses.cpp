class Solution {
public:

     bool ismatch(char c,char top){
         if(c==')'&&top=='('){ return true;}
         else if(c=='}'&&top=='{'){return true;}
         else if(c==']'&&top=='['){return true;}
         else{return false;}
     }
    bool isValid(string s) {
                stack<char>ms;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            ms.push(s[i]);
            }
            
            else{ if(ms.empty()||!ismatch(s[i],ms.top())){
                return false;
                
            }
            ms.pop();
            }
    }
    return ms.empty();
    }
};