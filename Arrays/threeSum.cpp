#include<bits/stdc++.h>
#include<vector>
using namespace std;
//works but give time excedded error
vector<vector<int>> triplet(int n, vector<int> &arr){
    vector<vector<int>> res ;
    //just removes the doublecates 
    for(int i = 0; i < arr.size(); i++){
        auto it = find(arr.begin()+ i + 1,arr.end() , arr[i] ) ;
        if(it != arr.end()){
            while(it != arr.end()){
                arr.erase(it) ;
                it = find(arr.begin() + i + 1, arr.end(), arr[i]) ;
            }
        }
    }

    for(int i = 0; i < n -1; i++){
        for(int j = i +1 ; j < n ; j++){
            auto it = find(arr.begin(), arr.end(), - arr[i]-arr[j]) ;
            if(it != arr.end()){
                vector<int> temp = {arr[i], arr[j], *it} ;
                res.push_back(temp) ;
                break ;
            }
        }
    }
    return res;
}

vector<vector<int>> triplet(vector<int>& arr){
    vector<vector<int>> res ;
    sort(arr.begin(), arr.end()) ;
    for(int i =0 ; i < arr.size(); i++){
        if(i > 0 && arr[i] == arr[i-1])
            continue;

        int j = i+1 ; 
        int k = arr.size() -1;
        while(k > j){
            int sum = arr[i] + arr[j] + arr[k] ;
            if(sum > 0){
                k --;
            }else if(sum < 0){
                j ++;
            }else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                res.push_back(temp) ;
                j++;
                k--;
                while(k>j && arr[j-1] == arr[j]) 
                    continue;
                while(k>j && arr[k+1] == arr[k])
                    continue;
            }
        }
    }
    return res;
}

int main(){
vector<int> v= {-1, -1, 2, 0, 1} ;
vector<vector<int>> res = triplet(v.size(), v) ;
for(int i = 0; i < res.size(); i++){
    for(int j = 0; j < res[0].size(); j++){
        cout << res[i][j] << " " ;
    }
    cout << endl;
}
}
/*
grab one element 
grab another i+1 element 
auto it = find(v.begin(), v.end(), - arr[i])- arr[j]
if(it != v.end()){
    cou
}
*/
