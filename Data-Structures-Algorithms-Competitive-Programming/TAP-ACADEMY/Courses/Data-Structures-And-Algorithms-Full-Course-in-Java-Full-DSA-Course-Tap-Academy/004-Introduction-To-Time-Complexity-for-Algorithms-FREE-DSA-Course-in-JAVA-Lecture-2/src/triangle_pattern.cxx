#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int rows {4};
    char asterisk {'*'};
    for (int row {}; row < rows; row += 1) {
        for (int column {}; column <= row; column += 1) {
            cout<<asterisk<<' ';
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}