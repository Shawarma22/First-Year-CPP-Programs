#include <iostream>
 
using namespace std;
 
template <class t>
class matrix {
    t mat[10][10];
    int r, c;
 
public:
    void getMatrix() {
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> mat[i][j];
            }
        }
    }
 
    matrix add(matrix o) {
        matrix res;
        res.r = 0;
        res.c = 0;
        if (r != o.r || c != o.c) {
            cout << "Error: matrix dimensions do not match\n";
            return res;
        }
        res.r = r;
        res.c = c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res.mat[i][j] = mat[i][j] + o.mat[i][j];
            }
        }
        return res;
    }
 
    void display() {
        if (r == 0 && c == 0) {
            return;
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
 
int main() {
    matrix<int> m1, m2, m3;
 
    m1.getMatrix();
    m2.getMatrix();
 
    m3 = m1.add(m2);
 
    cout << "Resultant Matrix:\n";
    m3.display();
 
    return 0;
}
