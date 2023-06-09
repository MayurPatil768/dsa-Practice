#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n>>endl;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<i;
            j+=1;
        }
        i+=1;
        
    }
}