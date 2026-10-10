
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> count(1001, 0);

        for (int x : arr1) {
            count[x]++;
        }

        for (int x : arr2) {
            while (count[x] > 0) {
                ans.push_back(x);
                count[x]--;
            }
        }

        for (int i = 0; i <= 1000; i++) {
            while (count[i] > 0) {
                ans.push_back(i);
                count[i]--;
            }
        }

        return ans;
    }
};
