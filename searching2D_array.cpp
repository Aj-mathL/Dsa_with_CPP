#include<iostream>
#include<vector>
#include<string> 
using namespace std; 

class Search{
    public: 

        bool searchRow(vector<vector<int>> & mat, int target, int row){
            int n = mat[0].size(); 
            int st = 0, end = n-1; 
            while(st<= end){
                int mid = st+ (end - st)/2; 
                if( target == mat[row][mid]){
                    return true; 
                }else if(target > mat[row][mid]){
                    st = mid + 1; 
                }else{ end = mid -1 ; }
            }
            return false; 
        }


        bool searchIn2DArray(vector<vector <int> > & mat, int target){
            int m = mat.size(), n = mat[0].size(); 
            int stR = 0, enR = m -1; 
            while(stR<=enR){
                int midR = stR + (enR -stR)/2; 
                if( target >= mat[midR][0] && target <= mat[midR][n-1]){
                    return searchRow(mat , target , midR); 
                }else if( target >= mat[midR][n-1]){
                    stR = midR+1; 
                }else{
                    enR = midR - 1; 
                }
            }
            return false; 

        }
} ;

int main(){

    vector<vector <int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20},{23, 30, 34, 60}}; 
    int target = 16; 
        
    cout<<"=========Given Matrix============"<<endl; 
    // for(int i = 0; i< mat.size() ; i++){
    //     for(int j = 0 ; j< mat[i].size() ; j++){
    //         cout<< mat[i][j] << " "; 
    //     }
    //     cout<< endl; 
    // }
    for( auto & i : mat){
        for(auto & j: i){
            cout<< j << " " ; 
        }
        cout<<endl; 
    }

    Search search; 
    cout<<"Searching matrix element "<<endl; 
    bool result = search.searchIn2DArray(mat, target); 
    if(result){
        cout<<"We find the target ( "<< result << " )"<<endl; 
    }else{ cout<<"Target not found ( "<< result <<" )" <<endl; }

    
    return 0;
}