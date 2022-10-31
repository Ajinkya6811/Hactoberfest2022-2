#include<bits/stdc++.h>
using namespace std;
void swamp(int &a, int &b){
    int temp = a;a = b;b = temp;b = temp;
}
void heapyfyMax(vector<int> &arr,int i,int size){
    int lft = 2*i+1;
    int rgt = 2*i+2;
    int grt = i;
    if(lft<size && arr[grt]<arr[lft]){
        grt  = lft;
    }
    if(rgt<size && arr[grt] < arr[rgt]) grt = rgt;
    swamp(arr[grt],arr[i]);
    if(grt != i) heapyfyMax(arr,grt,size);

}
void heapyfyMin(vector<int> &arr,int i,int size){
    int lft = 2*i+1;
    int rgt = 2*i+2;
    int les = i;
    if(lft<size && arr[les]>arr[lft]){
        les  = lft;
    }
    if(rgt<size && arr[les] > arr[rgt]) les = rgt;
    swamp(arr[les],arr[i]);
    if(les != i) heapyfyMax(arr,les,size);

}

void sortF(vector<int> &arr){
    for(int i = (arr.size()-1)/2;i>=0;i--){
        heapyfyMax(arr,i,arr.size());
    }

    // cout<<arr.size()<<endl;
    for(int i = arr.size()-1;i>=0;i--){
        swamp(arr[i],arr[0]);
        heapyfyMax(arr,0,i);
    }
}
void sortMin(vector<int> &arr){
    for(int i = (arr.size()-1)/2;i>=0;i--){
        heapyfyMax(arr,i,arr.size());
    }

    // cout<<arr.size()<<endl;
    for(int i = arr.size()-1;i>=0;i--){
        swamp(arr[i],arr[0]);
        heapyfyMax(arr,0,i);
    }
}
void print(vector<int> arr){
    // cout<<arr.size()<<endl;
    for(int i = 0;i<arr.size();i++) cout<<arr[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int> vct(n);
    for(int i = 0;i<n;i++) cin>>vct[i];
    sortF(vct);
    // cout<<vct.size()<<endl;
    print(vct);
    return 0;
}