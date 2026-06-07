"""
A. Euclid, Sequence and Two Numbers
time limit per test1 second
memory limit per test256 megabytes
We define a Euclid algorithm sequence of length k
 (k≥2
) for two positive integers x≥y
 as the following sequence of positive integers:

a1,a2,…,ak
, where a1=x
, a2=y
, and for any i
 (1≤i≤k−2
), the equality ai+2=(aimodai+1)
 holds∗
.
For example, for x=13,y=8,k=4
, the corresponding Euclid algorithm sequence is a=[13,8,5,3]
. (a3=13mod8=5
, a4=8mod5=3
).

You are given a sequence b1,b2,…,bn
. You need to determine whether it is possible to permute its elements so that it becomes a Euclid algorithm sequence for some two positive integers x≥y
.

∗
xmody
 denotes the remainder when x
 is divided by y
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains an integer n
 (2≤n≤100
) — the size of the sequence.

The second line of each test case contains n
 integers b1,b2,…,bn
 (1≤bi≤109
) — the sequence b
.

Output
For each test case, if it is possible to permute the elements of sequence b
 so that there exists a suitable pair of positive integers x≥y
, output x,y
 on a separate line. Otherwise, output −1
 on a separate line.

If there are several suitable pairs x,y
, you may output any of them.

Example
InputCopy
6
2
1 1
2
1 2
4
1 2 3 4
3
6 4 2
4
3 8 13 5
3
1 1 1
OutputCopy
1 1
2 1
-1
6 4
13 8
-1
Note
In the first test case, the pair (1,1
) is suitable: for x=1,y=1,k=2
, a1=x=1,a2=y=1
, and the sequence a=[1,1]=b
 is obtained.

In the third test case, it can be shown that no suitable pair (x,y
) exists.

In the fourth test case, the pair (6,4
) is suitable: for x=6,y=4,k=3
, a1=x=6,a2=y=4,a3=(a1moda2)=(6mod4)=2
, and the sequence a=[6,4,2]=b
 is obtained.
"""

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num;
        cin >> num;

        vector<int> v;

        for (int i = 0; i < num; i++) {
            int p;
            cin >> p;
            v.push_back(p);
        }

        sort(v.begin(), v.end(), greater<int>());

        bool flag = true;

        if (num > 2) {
            for (int i = 0; i < num - 2; i++) {
                if (v[i] % v[i + 1] != v[i + 2]) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            cout << v[0] << " " << v[1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}