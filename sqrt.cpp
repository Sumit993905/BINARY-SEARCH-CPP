#include<iostream>

using namespace std;

long long int sqrtInteger( int n ){

    int s=0;
    int e=n;
    int ans =-1;

    long long int mid = s + (e-s)/2;

    while(s<=e){

        long long int square = mid*mid;

        if(square == n)
        return mid;

        if(square<n){
            ans  = mid;
            s = mid+1;

        }
        else{
            e = mid-1;

        }
        mid = s + (e-s)/2;

    }

    return ans;


}

int main(){

    int n;
    cout<<"Enter the number :"<<endl;

    cin>>n;

    cout<<"Square root of Integer Value is : "<<sqrtInteger(n);


    return 0;
}