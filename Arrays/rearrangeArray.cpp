#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi, negi, output;
    
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                posi.push_back(nums[i]);
            }
            if (nums[i] < 0) {
                negi.push_back(nums[i]);
            }
        }

        int t1 = 0, t2 = 0, t3 = 0;
        while (t3 != nums.size()) {
            output.push_back(posi[t1]);
            output.push_back(negi[t2]);
            t1++;
            t2++;
            t3 = t3 + 2;
        }
        return output;
    }