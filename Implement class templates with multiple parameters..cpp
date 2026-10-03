#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    p1.display();

    Pair<string, char> p2("Hello", 'A');
    p2.display();

    Pair<double, bool> p3(3.14, true);
    p3.display();

    return 0;
}
