// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;
int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int n=rand()%9;
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get "<<grade[n]<<" in this 261102.";
    return 0;
}