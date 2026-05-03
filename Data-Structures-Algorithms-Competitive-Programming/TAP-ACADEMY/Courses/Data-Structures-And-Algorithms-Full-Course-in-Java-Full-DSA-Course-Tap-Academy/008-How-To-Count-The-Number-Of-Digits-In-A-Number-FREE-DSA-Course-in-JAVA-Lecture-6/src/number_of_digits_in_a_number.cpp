#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
number_of_digits_in_a_number(
    int n
) -> int {
    int digits {0};
    if (n >= 0 && n <= 9) {
        digits = 1;
        return digits;
    }
    while (n > 0) {
        n /= 10;
        digits += 1;
    }
    return digits;
}

auto
main(void) -> int {
    int n {};
    cin>>n;
    // function call
    cout<<number_of_digits_in_a_number(n)<<endl;
    return EXIT_SUCCESS;
}