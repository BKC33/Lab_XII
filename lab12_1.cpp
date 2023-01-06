#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){


    string Grade[]={"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int rs = rand()%9;

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    
    cout << "You will get "<<   Grade[rs]  <<" in this 261102." ;


}



