#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = n * m;
    
    if (n % 2 == 0 && m % 2 == 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    int x = 0, y = 0;
    matrix[x][y] = 1;
    int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dir = 0;
    for (int i = 1; i < total; ++i) {
        int dx = dirs[dir][0];
        int dy = dirs[dir][1];
        int steps = i;
        int nx = x;
        int ny = y;
        if (dx != 0) {
            nx = (x + dx * steps) % n;
            if (nx < 0) nx += n;  
        } else { 
            ny = (y + dy * steps) % m;
            if (ny < 0) ny += m; 
        }
        matrix[nx][ny] = i + 1;
        x = nx;
        y = ny;
        dir = (dir + 1) % 4;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
