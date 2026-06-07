#2229A 
#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main(){
    vector<int> v ;
    
    int t, n, pos;
    int s ;
    cin >> t ;
    while(t--){
        v = {} ;
        s = 0 ;
        cin >> n ;
        for(int i = 0 ; i < n ; i ++){
            cin>> pos ;
            v.push_back(pos) ;
            s = s+pos ;
        }
        int m = s/v.size() ;
        int ma = 0 ;
        int mi = INT_MAX ;
        for(int i = 0 ; i <v.size() ; i++){
            if(v[i] > ma){
                ma = v[i] ;
            }
            if (v[i] < mi){
                mi = v[i] ;
            }
        }
        int dif1 = abs(m-ma);
        int dif2 = abs(m-mi) ;
        if(dif1>dif2){
            cout<<dif1 << endl ;
        }
        else if(dif2>dif1){
            cout << dif2 << endl ;
        }
        else{
            cout << dif1<< endl ;
        }
        
    }
}