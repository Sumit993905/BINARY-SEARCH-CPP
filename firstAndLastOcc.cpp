#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start , end , mid;
     
     start=0;
     
     end= size-1;

     mid =start +(end-start)/2;

    while(start <= end){

        if(arr[mid]==key){
            return mid;
        }

        else if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

         mid=start +(end-start)/2;

    }

    return -1;

}

int main(){
    
   

    // Even Array
    int even[6]= {2,4,6,8,12,14};

    //Odd Array
    
    int odd[5]= {3,6,9,16,18};

    int EvenIndex= binarySearch(even, 6 , 14);

    int oddIndex = binarySearch(odd, 5 , 3);


    
   cout<<" Index of Element 14 is : "<< EvenIndex << endl;


    cout<<" Index of Element 3 is : "<< oddIndex << endl;;

    return 0;
}