#include <estd/AnsiEscape.hpp>
#include <iostream>

using namespace std;
using namespace estd;

int main() {
    cout << estd::setTextColor(0, 255, 0);
    cout << "hello ";
    cout << estd::setTextColor(0, 255, 255);
    cout << "world\n";
    return 0;
}