#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,50,60};
    int sum=50;
    for(int i=0 ; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Pair found "<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}