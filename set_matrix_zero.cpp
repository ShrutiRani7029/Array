#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    set<int> r, c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                r.insert(i);
                c.insert(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (r.count(i) || c.count(j) || matrix[i][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    setZeroes(v);
    for (const auto& row : v) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
