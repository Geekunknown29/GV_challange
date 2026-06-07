/*
A. Expression
time limit per test1 second
memory limit per test256 megabytes
Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers a, b, c on the blackboard. The task was to insert signs of operations '+' and '*', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
Note that you can insert operation signs only between a and b, and between b and c, that is, you cannot swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given a, b and c print the maximum value that you can get.

Input
The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).

Output
Print the maximum value of the expression that you can obtain.

Examples
InputCopy
1
2
3
OutputCopy
9
InputCopy
2
10
3
OutputCopy
60

*/

#include<iostream>

using namespace std; 
int main(){
    
    int a,b,c,m ;
    
    cin >> a;
    cin >> b ;
    cin >> c ;
    
    int var1 = (a*b)+c ;
    int var2 = a+(b*c) ;
    int var3 = a*(b+c) ;
    int var4 = (a+b)*c ;
    int var5 = a*b*c ;
    int var6 = a+b+c ;
  
    if(var1>=var2 && var1 >= var3 && var1>=var4 && var1 >= var5 && var1 >= var6){
        m = var1;
    }
    else if (var2>=var1 && var2>= var3 && var2>=var4 && var2 >= var5 && var2 >= var6){
        m = var2 ;
    }
    else if (var3>=var2 && var3>= var1 && var3>=var4 && var3 >= var5 && var3>=var6){
        m = var3 ;        
    }
    else if (var4>=var2 && var4>= var1 && var4>=var3 && var4 >= var5 && var4>=var6){
        m = var4 ;        
    }
    else if (var5>=var2 && var5>= var1 && var5>=var3 && var5 >= var4 && var5>=var6){
        m = var5 ;        
    }
    else if (var6>=var2 && var6>= var1 && var6>=var3 && var6 >= var5 && var6>=var4){
        m = var6 ;        
    }

    
    cout << m<<endl ;
    return 0 ;
}