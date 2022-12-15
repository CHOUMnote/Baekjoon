#include <iostream>
using namespace std;
class A{
public:
    ~A(){
        cout << "Hello World!";
    }
};
int main(){
    A a;
}