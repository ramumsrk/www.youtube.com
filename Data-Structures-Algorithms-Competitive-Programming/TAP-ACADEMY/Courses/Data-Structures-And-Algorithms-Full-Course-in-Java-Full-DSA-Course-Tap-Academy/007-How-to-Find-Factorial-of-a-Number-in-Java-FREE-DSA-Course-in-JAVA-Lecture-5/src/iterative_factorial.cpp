#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
factorial(
    int n
) -> int {
    int n_factorial {1};
    if (n <= 0) return n_factorial;
    for (int i {n}; i > 1; i -= 1) {
        n_factorial *= i;
    }
    return n_factorial;
}

auto
main(void) -> int {
    int n {};
    cin>>n;
    cout<<"Factorial of '"<<n<<"' is '"<<factorial(n)<<"'"<<endl;
    return EXIT_SUCCESS;
}