/*
A. Kefa and First Steps
time limit per test2 seconds
memory limit per test256 megabytes
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

Example
Input
6
2 2 1 3 4 1
Output
3
Input
3
2 2 9
Output
3
Note
In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.


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
    int m = 1 ;
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