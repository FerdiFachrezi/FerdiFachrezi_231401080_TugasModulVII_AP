#include <iostream>
using namespace std;
int main(){
    int i=0;
    int *pointeri=&i;
    for (int i = 0; i < 20; i++) {
        if (i % 2 != 0){
            cout << i << "\t" << pointeri << endl;
        }
    }
}