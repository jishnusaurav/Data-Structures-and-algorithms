#include <bits/stdc++.h>
using namespace std;

int search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;
 
    // traverse through the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            // if the element is found
            if (mat[i][j] == x) {
                cout << "Element found at (" << i << ", "
                     << j << ")\n";
                return 1;
            }
    }
 
    cout << "n Element not found";
    return 0;
}
 
// Driver code
int main()
{
    int mat[4][4] = { { 19, 27, 53, 80 },
                      { 15, 25, 35, 55 },
                      { 22, 91, 37, 98 },
                      { 56, 32, 49, 90 } };
 
    // Function call
    search(mat, 4, 37);
 
    return 0;
}
