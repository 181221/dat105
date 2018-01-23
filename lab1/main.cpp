#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> vektor;
    for(int i = 0; i <= n; i++){
        vektor.push_back(true);
    }

    for(int i = 2; i <= n; i ++ ){
        for(int j = 2; j < n; j++){
            int ikkeprimtall = j*i;
            if(ikkeprimtall < n){
                vektor[ikkeprimtall] = false;
            }
        }
    }

    for(int i = 2; i < n; i++){
        if(vektor[i] == 1){
            cout << i << " ";
        }
    }

    return 0;
}