#include <iostream>
#include <iostream>
void print(int* p, int s) {
    for(int i = 0; i < s; ++i)
        std::cout << p[i] << ' ';
    std::cout << '\n';
}
int main() {
    int a = 5;
    int* p = &a;
    int& r = a;
    *p = 1;
    std::cout << "Test 1: " << a << '\n';
    r = 10; // r referer til a og p peker på a;
    std::cout << "Test 2: " << a << ' ' << *p << '\n';


    // Test 1: 1
    // Test 2: 10 10


    int arg[] = {1,2,3,4,5};
    print(arg,5);

    return 0;
}