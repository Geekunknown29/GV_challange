/*
A. Word Capitalization

Time Limit: 2 seconds
Memory Limit: 256 megabytes

Capitalization means writing a word with its first letter in uppercase, while keeping all other letters unchanged.

Your task is to capitalize the given word.

Input
A single non-empty word consisting of uppercase and lowercase English letters. The length of the word will not exceed 1000 characters.

Output
Print the given word after capitalization.

Examples :-

Input:
ApPLe
Output:
ApPLe

Input:
konjac
Output:
Konjac
*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std ;

int main(){
    string s  ;
    cin >> s ;

    s[0] = toupper(s[0]) ;
    
    cout<<s <<endl ;
    return 0 ;
}