#include <iostream>
#include <climits>
using namespace std;

// Time: - O(mn) Space:- O(1)
void findLargest(int **input, int nRows, int mCols)
{
    // Write your code here
    int ans = INT_MIN, index = 0;
    bool isRow = true;
    for (int i = 0; i < nRows; i++)
    {
        int sum = 0;
        for (int j = 0; j < mCols; j++)
        {
            sum += input[i][j];
        }
        if (sum > ans)
        {
            index = i;
            ans = sum;
        }
    }

    for (int i = 0; i < mCols; i++)
    {
        int sum = 0;
        for (int j = 0; j < nRows; j++)
        {
            sum += input[j][i];
        }
        if (sum > ans)
        {
            index = i;
            ans = sum;
            isRow = false;
        }
    }

    if (isRow)
    {
        cout << "row"
             << " " << index << " " << ans << endl;
    }
    else
    {
        cout << "column"
             << " " << index << " " << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}