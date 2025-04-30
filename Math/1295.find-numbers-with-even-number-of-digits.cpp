class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int num:nums) {
            string curr = to_string(num);
            if(curr.size()%2==0) {
                ans++;
            }
        }
        return ans;
    }
};
