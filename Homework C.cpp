#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int f1 = 1, f2 = 1, f3;
    for (int i = 3; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f2;
}

int main() {
    const int N = 6; 
    int n;

    ifstream file("data_x.txt");

    if (file) {
        cout << "File sukses dibuka!" << endl;
        cout << "n" << setw(5) << "y" << endl;

        for (int i = 0; i < N; i++) {
            file >> n;                
            int y = fibonacci(n);  
            cout << n << setw(5) << y << endl;
        }

        file.close();
        return 0;
    } else {
        cout << "File gagal dibuka!" << endl;
        return 1;
    }
}


