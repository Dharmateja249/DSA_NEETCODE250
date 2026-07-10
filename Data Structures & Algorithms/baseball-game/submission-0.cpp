class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int totsum=0;
        for(int i=0;i<operations.size();i++){
            int sum=0;
            if(operations[i]=="+"){
                sum+=st.top();
                int a=st.top();
                st.pop();
                sum+=st.top();
                st.push(a);
                st.push(sum);

            }
            else if(operations[i]=="D"){
                int mul=1;
                mul=2*st.top();
                st.push(mul);

            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else{
                
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            totsum+=st.top();
            st.pop();
        }
        return totsum;
        
    }
};