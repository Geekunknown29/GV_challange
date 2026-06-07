/*A. Elephant
time limit per test1 second
memory limit per test256 megabytes
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Examples
Input
5
Output
1
Input
12
Output
3
Note
In the first sample the elephant needs to make one step of length 5 to reach the point x.

In the second sample the elephant can get to point x if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the elephant cannot reach x in less than three moves.

*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std ;

int main(){
    int flag; 
    int step = 0; 
    int extra_steps_for_remainder = 0;  
    vector<int> length = {5,4,3,2,1}; 
    int coor ;
    cin >> coor ;


    if (coor <= 1) {
        flag = 0; 
    } else if (coor <= 3) {
        flag = 1; 
    } else if (coor % 2 == 0 || coor % 3 == 0) {
        flag = 0; 
    } else {
        flag = 1; 
        for(int i = 5; i * i <= coor; i = i + 6){
            if(coor % i == 0 || coor % (i + 2) == 0){
                flag = 0; 
                break; 
            }
        }
    }


    if (flag == 1) { 
        int remaining_coor = coor;
        for(int len : length){ 
            step += remaining_coor / len; 
            remaining_coor %= len; 
            if (remaining_coor == 0) break; 
        }
    }
    else { 
        int remaining_coor = coor;
        for(int len : length){ 
            step += remaining_coor / len; 
            remaining_coor %= len; 
            if (remaining_coor == 0) break; 
        }
    }

    cout << step; 
    return 0;
}