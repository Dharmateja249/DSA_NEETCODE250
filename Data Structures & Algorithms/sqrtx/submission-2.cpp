class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        int j=x;
        int res=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if((long long)mid*mid==x){
                return mid;
            }
            else if((long long)mid*mid<x){
                i=mid+1;
                res=mid;
            }
            else{
                j=mid-1;
            }
        }
        return res;
        
    }
};