/*
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

Input
The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

Output
Print "YES" if the situation is dangerous. Otherwise, print "NO".

Examples
Input
001001
Output
NO
Input
1000000001
Output
YES

*/

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>

using namespace std ;

int main(){
    string s;
    cin >> s ;
    string flag ;
    
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i] == s[i+1] && s[i] == s[i+2] && s[i] == s[i+3]&& s[i] == s[i+4]&& s[i] == s[i+5]&& s[i] == s[i+6]){
            flag = "YES";
            break ;
        }
        else{
            flag = "NO" ;
        }
    }
    cout << flag ;
    return 0;
}