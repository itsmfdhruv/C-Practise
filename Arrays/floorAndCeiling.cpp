#include<bits/stdc++.h>
using namespace std;
//Floor of 'x' largest a[i] <= x
//Ceiling of 'x' smallest a[i] >= x
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int s = 0;
    int e = n-1 ;
    int floor , ceiling ;

    while(e >= s){
        int mid = s + (e-s)/2 ;

        if(a[mid] <= x){
            floor = mid ;
            s = s +1 ;
        }else 
            e = e -1;
    }

    while(e >= s){
        int mid = s + (e-s)/2 ;

        if(a[mid] >= x){
            ceiling = mid ;
            s = s +1 ;
        }else 
            e= e-1;
    }
    return {floor , ceiling};
}