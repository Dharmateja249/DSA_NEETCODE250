class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if (n1 > n2) return false;
        
        vector<int> count1(26, 0), count2(26, 0);
        
        // Build frequency profile for s1 and the first window of s2
        for (int i = 0; i < n1; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        
        if (count1 == count2) return true;
        
        // Slide the window across s2
        for (int i = n1; i < n2; i++) {
            // Add new character on the right
            count2[s2[i] - 'a']++;
            // Remove old character from the left
            count2[s2[i - n1] - 'a']--;
            
            // Vector comparison in C++ checks element-by-element
            if (count1 == count2) return true;
        }
        
        return false;
    }
};