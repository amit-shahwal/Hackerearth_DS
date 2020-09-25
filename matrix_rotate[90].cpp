//this program is to roate matrix clock wise or anti cockwise
#include<bits/stdc++.h>
#define R 3
#define C 3
using namespace std;
void transpose(int arr[R][C])
{
    for(int i=0; i<R; i++)
        for(int j=i; j<C; j++)
            swap(arr[i][j],arr[j][i]);

}
void columnrevrse(int arr[R][C])
{
    for(int i=0; i<C; i++)
        for(int j=0,k=C-1; j<k;j++,k--)
            swap(arr[j][i],arr[k][i]);

}

void printmatrix(int arr[R][C])
{
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++)
            cout<<arr[i][j]<<" ";
    cout<<endl;
}}
void rotatemat(int arr[R][C])
{
    columnrevrse(arr);
    transpose(arr);

}
int main()
{

  int arr[R][C] = {{1,2,3},{4,5,6},{7,8,9}};
rotatemat(arr);
printmatrix(arr);

}

