#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    char asterisk {'*'};
    auto rows {3};
    for (int row {}; row < rows; row += 1) {
        for (int column {}; column < rows; column += 1) {
            cout<<asterisk;
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}