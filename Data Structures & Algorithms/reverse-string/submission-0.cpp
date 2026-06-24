class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,r=s.size()-1;
        while(i<r){
            swap(s[i],s[r]);
            i++;
            r--;
        }

        
    }
};