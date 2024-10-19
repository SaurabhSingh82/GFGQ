/*
Problem statement
You're given a string 'S' consisting of "{", "}", "(", ")", "[" and "]" .



Return true if the given string 'S' is balanced, else return false.



For example:
'S' = "{}()".

There is always an opening brace before a closing brace i.e. '{' before '}', '(' before ').
So the 'S' is Balanced.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
[()]{}{[()()]()}
Sample Output 1 :
Balanced
Explanation Of the Sample Input 1 :
There is always an opening brace before a closing brace i.e. '{' before '}', '(' before '), '[' before ']'.
So the 'S' is Balanced.
Sample Input 2 :
[[}[
Sample Output 2 :
Not Balanced
Constraints:
1 <= 'N' <= 10^5

Where 'N' is the length of the input string 'S'.
Time Limit: 1 sec

*/

code-->

bool match(char c,char t){
    if((c=='[' && t==']') || (c=='(' && t==')') ||(c == '{' && t == '}')){
        return true;
    }else{return false;}
}




bool isValidParenthesis(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //if opening braket push into stack
        if (ch=='{' || ch=='[' || ch=='('){
            st.push(ch);
        }
        else{
            if (!st.empty()){
                char c=st.top();
                if (match(c,ch)){
                    st.pop();                

                }else{ return false;}
            }
            else{
                return false;
            }
        }
    }if (st.empty()){
        return true;
    }else{return false;}
}
