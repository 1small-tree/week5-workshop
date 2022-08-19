
#include<iostream>
using namespace std;
int main(){
    int n=3;
    string first[3][2]={};
    string second[3][2]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            second[i][j]=first[i][j];
        }
    }
}
