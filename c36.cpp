/*
A. Arrival of the General
time limit per test2 seconds
memory limit per test256 megabytes
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.
By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.
For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.
Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.
Input
The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.
Output
Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.

Examples
Input
4
33 44 11 22
Output
2
Input
7
10 10 58 31 63 40 76
Output
10
Note
In the first sample the colonel will need to swap the first and second soldier and then the third and fourth soldier. That will take 2 seconds. The resulting position of the soldiers is (44, 33, 22, 11).
In the second sample the colonel may swap the soldiers in the following sequence:
(10, 10, 58, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 76, 40)
(10, 58, 10, 31, 76, 63, 40)
(10, 58, 31, 10, 76, 63, 40)
(10, 58, 31, 76, 10, 63, 40)
(10, 58, 31, 76, 63, 10, 40)
(10, 58, 76, 31, 63, 10, 40)
(10, 76, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 40, 10)

*/
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    
    int min, max ;
    int min_ind, max_ind ;
    min_ind = max_ind = 0 ;
    int count = 0 ;
    int personnels ;
    cin >> personnels ;
    
    vector<int> que ;
    for (int i = 0 ; i<personnels; i++){
        int candidate ;
        cin >> candidate ;
        que.push_back(candidate ) ;
        
    }
    min = max = que[0] ;
    for(int i = 0 ; i<personnels; i++){
        if(que[i]<=min){
            min = que[i] ;
            min_ind = i ;
        }
        
        if(que[i]>max){
            max = que[i] ;
            max_ind = i ;
        }
    }
     int count_for_min = personnels-1-min_ind ;
     int count_for_max = max_ind ;
     
     int seconds = count_for_max+ count_for_min ;
     if (max_ind > min_ind) {
        seconds-- ;
    }
     cout << seconds <<endl ;
//     cout << max_ind << " " << min_ind <<endl ;
//     cout << count_for_max <<" "<< count_for_min ;  
    return 0 ;
}