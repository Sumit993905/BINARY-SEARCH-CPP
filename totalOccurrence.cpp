#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start , end , mid , ans;
     
     start=0;
     
     end= size-1;

     mid =start +(end-start)/2;

     ans=-1;

    while(start <= end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

         mid=start +(end-start)/2;

    }

    return ans;

}

int lastOcc(int arr[], int size, int key){

    int start , end , mid , ans;
     
     start=0;
     
     end= size-1;

     mid =start +(end-start)/2;

     ans=-1;

    while(start <= end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

         mid=start +(end-start)/2;

    }

    return ans;

}

int main(){

    int arr[6]={1,2,3,3,5,3};

    int TotalNoOfOccurrence = (lastOcc(arr, 6 , 3) + firstOcc(arr, 6 , 3))/2;

    cout<<"Total No of Occurrence of 3 is : "<<TotalNoOfOccurrence<<endl;
   
    return 0;
   
}