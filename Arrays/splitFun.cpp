#include<bits/stdc++.h>
using namespace std;

void splits(string st, int k){
    vector<string>words ;
    // aim is to make a "word array" and print the number of words accordingly
    for(int i = 0; i < st.size(); i++){
        if(st[i+1] == ' ' || i == st.size()-1){
            string ros ;
            ros.append(words.substr())
        }
    }
    for(int i =0; i < st.size(); i++){
        cout << words[i] ;
    }
    
}

int main(){
    string prompt = "I love dance and taylor swift songs" ;
    splits(prompt , 3 ) ;
}