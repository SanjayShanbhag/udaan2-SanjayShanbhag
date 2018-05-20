#include <iostream>
using namespace std;
int main(){
    int i,n,m,j,a[100][100],prod,b[100],c[100],count=0,area=0,area1=0;
    cout<<"Enter the value of n: \n";
    cin>>n;
    cout<<"Enter the value of m: \n";
    cin>>m;
    cout<<"Enter the matrix: \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int k = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[j][i] == 1){
                ++count;
            }
            else{
                count = 0;
            }
        }
        b[k] = count;
        ++k;
        count = 0;
    }
    for(i=0;i<k-1;i++){
        if(b[i] == b[i+1]){
            area = area + b[i] + b[i+1];
        }
    }
    if(area == 0){
        int max = b[0];
        for(i=1;i<k;i++){
            if(b[i]>max){
                max = b[i];
            }
        }
        area = max;
    }


    int l = 0;
    count = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j] == 1){
                ++count;
            }
            else{
                count = 0;
            }
        }
        c[l] = count;
        ++l;
        count = 0;
    }
    for(i=0;i<l-1;i++){
        if(c[i] == c[i+1]){
            area1 = area1 + c[i] + c[i+1];
        }
    }
    if(area1 == 0){
        int max = c[0];
        for(i=1;i<l;i++){
            if(c[i]>max){
                max = c[i];
            }
        }
        area1 = max;
    }
    if(area1>area){
        cout<<"\n"<<area1;
    }else{
        cout<<"\n"<<area;
    }
}
