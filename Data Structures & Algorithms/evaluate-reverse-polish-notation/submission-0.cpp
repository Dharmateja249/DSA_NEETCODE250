class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int t1=0;
        int t2=0;
        int t3=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="*"&&tokens[i]!="/"&&tokens[i]!="-"){
                st.push(stoi(tokens[i]));
            }
            else{
                t1=st.top();
                st.pop();
                t2=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    t3=t2+t1;
                    st.push(t3);
                }
                else if(tokens[i]=="-"){
                    t3=t2-t1;
                    st.push(t3);
                }
                else if(tokens[i]=="*"){
                    t3=t2*t1;
                    st.push(t3);
                }
                else{
                    t3=t2/t1;
                    st.push(t3);
                }

            }
        }
        return st.top();
        
    }
};
