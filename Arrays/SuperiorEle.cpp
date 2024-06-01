#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>& a) {
    vector<int> ans;

    int max = a[a.size() - 1] ;
    ans.push_back(max);

    for(int i = a.size() ; i >= 0 ; i--){
        if(a[i] > max){
            ans.push_back(a[i]) ;
            max = a[i] ;
        }
    }
    return ans;
}
int longestSuccesiveSequence(vector<int>& a){
   int n = a.size() ;
   if(n == 0 ){
    return 0 ;
   }

   sort(a.begin() , a.end());
   int count = 0 ;
   int SmallestTill = INT_MIN ;
   int largest = 1 ;

   for(int i = 0 ; i < n ; i ++){
        if(a[i] - 1 == SmallestTill){
            SmallestTill = a[i] ;
            count ++ ;
        }else if(a[i] != SmallestTill){
            count = 0 ;
            SmallestTill = a[i] ;
        }
        largest = max(largest  , count) ;

   }

   return largest ;
   }

int main(){
    vector<int> query = {5, 8 ,3 ,2,1,4};
    cout << longestSuccesiveSequence(query) ;
}

/*
find the max and min element 
make a currElement variable = min 
for(currElement= min ; currElement != max; currElement ++){
    int existence = find()
}
*/