#include<iostream>

using namespace std;
int func(int n){
    if (n==0 || n==1){
        return n;
    }
    else{
        return func(n-1)+func(n-2);
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<func(i)<<" ";
    }
    return 0;
}