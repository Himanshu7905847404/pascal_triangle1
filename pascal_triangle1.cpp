  #include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal_Triangle(int n){
    vector<vector<int>>pascal(n);
    for(int i = 0;i<n;i++){
        pascal[i].resize(i+1);
        
        for(int j = 0 ; j<i+1;j++){
            if(j==0 or j==i){
                pascal[i][j]=1;
            }
            else{
            pascal[i][j] = pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
    

return pascal;
}
int main()
{
    int n;
    cout<<"Enter the row number \n";
    cin>>n;
    vector<vector<int>> ans;
    ans = pascal_Triangle(n);
    for(int i =0 ; i<ans.size();i++){
        for(int j = 0 ; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
