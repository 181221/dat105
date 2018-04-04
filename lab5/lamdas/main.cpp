#include <iostream>
#include <vector>
#include <algorithm>
#include "../../resources/std_lib_facilities.h"

using namespace std;

auto func = [] ()  { cout << "Hello world"; };

auto func1 = [] (vector<int> &v) {
    int sum = 0;
    for(int i : v) {
        sum += i;
    }
    return sum;
};

template<class T>
int vectorsum(vector<T> &v) {
    int sum = 0;
    for_each(v.begin(), v.end(), [&sum] (int num){
       sum += num;
    });
    return sum;
}

template<class T>
bool compareNumber(T &a, T &b) {
    return a > b;
}

template<class T>
void sortList(list<T> &l) {
    l.sort([] (T a, T b) { return a < b;});
}

int main()
{

    func(); // now call the function

    vector<int> v = {1, 2, 3, 4};

    cout << vectorsum(v);

    list<int> k = { 1, 4, 2, 3, 9, 5 };

    sortList(k);

    cout << endl;

    for(int i : k){
        cout << i << " ";
    }

}