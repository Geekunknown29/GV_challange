/*
A. Way Too Long Words
time limit per test1 second
memory limit per test256 megabytes
Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.
Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
Input
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

Output
Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

Examples : 

Input : 
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output :
word
l10n
i18n
p43s

*/


#include<iostream>
#include<string>
#include<vector>

using namespace std ;

int main(){
    vector<string> result ;
    string s ;
    int test ;
    
    cin >> test ;
    
    
    
    for(int i = 0 ; i < test ; i ++){
        cin >> s ;
        int len = s.size() ;
        if(len>10){
            char fe = s[0] ;
            char le = s[s.size()-1] ;
            
            string element = fe+ to_string(len-2) + le ;
            
            result.push_back(element) ;
            
        }
        else{
            result.push_back(s) ;
        }
        
    }
    
    for(int i = 0 ; i < result.size() ; i++){
        cout << result[i] << endl ;
    }
    
    return 0 ;
}