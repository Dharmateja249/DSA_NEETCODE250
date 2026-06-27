class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.length()==0){
            return word2;
        }
        else if(word2.length()==0){
            return word1;
        }
        int i=0;
        int j=0;
        string ans;
        while(i<word1.length()&&i<word2.length()){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
            i++;

        }
        if(word1.length()>word2.length()){
            for(int i=word2.length();i<word1.length();i++){
                ans.push_back(word1[i]);
            }
        }   
        else{
            for(int i=word1.length();i<word2.length();i++){
                ans.push_back(word2[i]);
            }

        }
        return ans;
        
    }
};