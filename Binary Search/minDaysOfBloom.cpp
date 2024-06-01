#include<iostream>
#include<vector>
using namespace std;


pair<int , int> lowhigh(vector<int>&bloomDay){
    int low = bloomDay[0] ;
    int high = low ;
    for(auto element : bloomDay){
        if(element < low)
            low = element ;
        else if(element > high)
            high = element ;
    }
    return {high , low} ;
}
int minDays(vector<int>& bloomDay, int m, int k) {
        int high = lowhigh(bloomDay).first ;
        int low = lowhigh(bloomDay).second ;
        int ans = -1 ;

        if(m * k > high) return -1 ;

        while(high >= low){
            int mid = (high + low) / 2;

            if(bloomDay[mid] >= bloomDay[mid+1] && bloomDay[mid] <= bloomDay[mid-1]){
                ans = mid ;
                high = mid - 1;
            }else
                low = mid + 1;
        }
        return ans ;
    }

int main(){
    vector<int>arr = {1,10,3,10,2}  ;
    cout << minDays(arr, 3 ,1) ;
}