#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    cout << "add(2,3) == 5: " 
         << (add(2,3) == 5 ? "PASS" : "FAIL") << endl;
    return 0;
}
git add utilities.h utilities.cpp
git commit -m "Add utilities module with add(a,b)"
