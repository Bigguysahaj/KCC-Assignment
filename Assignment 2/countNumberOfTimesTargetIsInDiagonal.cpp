 #include<bits/stdc++.h>
 #include<vector>
using namespace std;
const int N =100;

#define fastio ios::sync_with_stdio(false);cin.tie(0);
#define ll long long

// 4
// 1 2 3 2 
// 1 3 2 4
// 1 2 3 2
// 2 1 3 1



int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
    int ans=0;
    int r = row;
    int c = col;

    if (A[row][col] == target){
            ans++;
        }
    do{
        if (A[row-1][col+1] == target){
            ans++;
        }row--;col++;
    } while ((row>=0) && (col<n));

    row = r;
    col = c;

    do{
        if (A[row+1][col+1] == target){
            ans++;
        }row++;col++;
    } while ((row<n) && (col<n));

    row = r;
    col = c;

    do{
        if (A[row+1][col-1] == target){
            ans++;
        }row++;col--;
    } while ((row<n) && (col>=0));

    row = r;
    col = c;

    do{
        if (A[row-1][col-1] == target){
            ans++;
        }row--;col--;
    } while ((row>=0) && (col>=0));



    // row = r-1;
    // do{
    //     if (A[row][col] == target){
    //         ans++;
    //     }c++;
    // } while (col!=n-1);

    return ans;
}

int main(){

#ifdef ONLINEJUDGE
       freopen("inputf.txt","r",stdin); //can need to change file . this one for taking input
       freopen("outputf.txt","w",stdout); // this one for output
#endif


    // fastio;
    // int test;
    // cin >> test;
    // while(test--)
    // {
        
    // // Your code here
    
    // }
    int n;
    cin>>n;
    int A[N][N];
    for (int i =0; i<n;i++){
        for(int j =0; j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
    return 0;
    }
