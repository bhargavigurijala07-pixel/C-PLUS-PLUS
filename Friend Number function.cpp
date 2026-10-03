#include <iostream>
using namespace std;
class Number {
private:
    int num;
public:
    Number(int n) {
        num = n;
    }
    friend void display(Number);
};
void display(Number n) {
    cout << "Number = " << n.num << endl;
}
int main() {
    Number obj(100);
    display(obj);
    return 0;
}
