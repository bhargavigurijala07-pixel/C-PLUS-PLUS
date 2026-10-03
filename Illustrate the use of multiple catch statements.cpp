#include <iostream>
using namespace std;

void testFunction(int x) {
    if (x == 0) {
        throw 0;
    }
    else if (x == 1) {
        throw "String exception";
    }
    else if (x == 2) {
        throw 3.14;
    }
    else {
        cout << "No exception thrown." << endl;
    }
}

int main() {
    for (int i = 0; i < 4; i++) {
        try {
            testFunction(i);
        }
        catch (int e) {
            cout << "Caught an integer exception: " << e << endl;
        }
        catch (const char* e) {
            cout << "Caught a string exception: " << e << endl;
        }
        catch (double e) {
            cout << "Caught a double exception: " << e << endl;
        }
        catch (...) {
            cout << "Caught an unknown exception." << endl;
        }
    }

    return 0;
}
