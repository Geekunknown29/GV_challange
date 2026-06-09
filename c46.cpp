"""
A. Marisa Steals Reimu's Takeout
time limit per test1 second
memory limit per test256 megabytes

The Darkness Brought In by Swallowstone Naturalis Historia
— Dateless Bar "Old Adam"
Marisa is a girl of integrity who always helps others safeguard their belongings. Over a period of n
 days, she comes each day to take one of Reimu's takeouts. The i
-th takeout is described by its deliciousness value — an integer wi
 (0≤wi≤2
), forming a sequence w
 of length n
.

Marisa has a special fondness for the number 3
. She can perform the following operation zero or more times:

Select a non-empty subsequence∗
 of w
 whose sum is divisible by 3
, and remove the elements of the subsequence from w
.
Determine the maximum number of operations Marisa can perform.

∗
A sequence a
 is a subsequence of a sequence b
 if a
 can be obtained from b
 by the deletion of several (possibly, zero or all) element from arbitrary positions.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
).

The second line contains n
 integers w1,w2,…,wn
 (0≤wi≤2
), denoting the deliciousness values of the takeouts.

Output
For each test case, output the maximum number of operations Marisa can perform.

Example
InputCopy
3
4
0 0 0 0
3
1 2 0
5
1 2 1 2 1
OutputCopy
4
2
2
Note
In the first test case, Marisa can perform four operations:
[0–,0,0,0]→[0–,0,0]→[0–,0]→[0–]→[].

In the second test case, Marisa can perform two operations:
[1–,2–,0]−>[0–]−>[].

In the third test case, Marisa can perform two operations:
[1–,2,1,2–,1]−>[2–,1,1–]−>[1].
"""
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int c0 = 0, c1 = 0, c2 = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x == 0) c0++;
            else if (x == 1) c1++;
            else c2++;
        }
 
        int p = min(c1, c2);
 
        int ans = c0 + p + (c1 - p) / 3 + (c2 - p) / 3;
 
        cout << ans << '\n';
    }
 
    return 0;
}