#include<iostream>
using namespace std;

isPossible(int arr[], int k , int mid){
    cowCount = 1;
    lastPos = arr[0];

    for(int i=0; i<arr.size(); i++){

        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount == mid){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int k){

    // Basically sort an array 
    sort(arr.begin(),arr.end());

    int s= 0;
    int maxi = -1;
    for(int i=0; i< arr.size(); i++){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int ans = -1; 
    int mid = s + (e-s)/2;

    while(s<=e){

        if(isPossible(arr,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else
        {
            e = mid-1;

        }
        mid = s + (e-s)/2;

    }

    return ans;

}

int main()
{
    int arr[5]={4,2,1,3,6};
    int k;
    cout<<"Enter the no of Cows "<<endl;
    cin>>k;
    cout<< aggressiveCows(arr,k);


    return 0;
}