#include<bits/stdc++.h>
using namespace std;

//for only maxSum not the output array
long long kadane(int arr[] , int arrSize){
    long long maxSum = LONG_MIN , currSum = 0; 
    int start = 0;
    int arrStart = -1 , arrEnd = -1;

    for(int i = 0 ; i < arrSize ; i++){
        if(currSum == 0) start = i ;

        currSum += arr[i] ;

        if(currSum > maxSum){
            maxSum = currSum ;
            //arrStart and arrEnd are decided upon the when surrsum exceed the maxsum because you ar going to print the maxsum 

            arrStart = start ;
            arrEnd = i; 
        }
        if(currSum < 0){
            currSum = 0 ;
        }
        }

        cout<<"[";
        for(int i = arrStart ; i <= arrEnd ; i++){
            cout << arr[i] << " " ;
        }
        cout << "]" ;


    return maxSum ;
}


int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;
        int arrSize = nums.size();
        
        for (int i = 0; i < arrSize; i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
