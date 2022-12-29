#include <iostream>
using namespace std;

int fibFunc(int n);
const int gridTraveler(int m, int n);
int main(){
    cout << fibFunc(6) << endl;
    cout << fibFunc(7) << endl;
    cout << fibFunc(8) << endl;
    //cout << fibFunc(50) << endl; //large values take a long time
    return 0;
}

int fibFunc(int n){
    if (n <= 2)
        return 1;
    return fibFunc(n-1) + fibFunc(n-2);
}