// Problem : https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=n; i>0; i--){
            for(int j=n; j>0; j--){
                if(i >= j){
                    cout << i << " ";
                    continue;
                }
                cout << j << " ";
            }
            
            for(int j=2; j<=n; j++){
                if(i >= j){
                    cout << i << " ";
                    continue;
                }
                cout << j << " ";
            }
            
            cout << endl;
        }
        
        
        for(int i=2; i<=n; i++){
            for(int j=n; j>0; j--){
                if(i >= j){
                    cout << i << " ";
                    continue;
                }
                cout << j << " ";
            }
            
            for(int j=2; j<=n; j++){
                if(i >= j){
                    cout << i << " ";
                    continue;
                }
                cout << j << " ";
            }
            
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends