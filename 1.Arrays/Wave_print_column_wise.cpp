/*Problem Name: Arrays-Wave print Column Wise
Problem Difficulty: None
Problem Constraints: Both M and N are between 1 to 10.
Problem Description:
Take as input a two-d array. Wave print it column-wise.

Input Format: Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Sample Input: 4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Output Format: All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
Sample Output: 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END*/

#include<iostream>

using namespace std;

int main()
{
    int nRow, mCol;
    cin>>nRow>>mCol;

    int arr[nRow][mCol];

    for(int i=0; i<nRow; i++){
        for(int j=0; j<mCol; j++){
            cin>>arr[i][j];
        }
    }

    for (int j = 0; j < mCol; j++) {
        if(j&1){
            for (int i = nRow-1; i >= 0; i--) {
                cout << arr[i][j] << ", ";
            }
        }
        else{
            for (int i = 0; i < nRow; i++) {
                cout << arr[i][j] << ", ";
            }
        }
    }
    cout << "END" <<endl;
    return 0;

}
