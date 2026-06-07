/*

*/
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> v ;
    vector<int> p ;
    int testCase = 0;
    cin >> testCase ;
    
    //this for is good
    for(int i = 0 ; i<testCase ; i++){
        int element = 0 ;
        cin >> element ;
        v.push_back(element) ;
    }
    int inc= 1 ;
    for(int k = 0 ; k <v.size()-1;k++){
        if(v[k]<=v[k+1]){
            inc ++ ;
        }
        else if(v[k]>v[k+1]){

            p.push_back(inc) ;
            inc = 1 ;
        }
        p.push_back(inc) ;
    }
    int m = 0 ;
    for(int i = 0 ; i< p.size() ; i++){

        if(p[i] >= m){
            m = p[i] ;
        }
        else{
            continue ;
        }
    }
    cout<< m ;

}