#include <iostream>
using namespace std;
struct BeforeMain 
{
    /* data */
    BeforeMain() {
        cout<< "constructing before main"<<endl;
    }
};

BeforeMain b;

int main() {
    cout<<"calling main"<<endl;
    return 0;
}
