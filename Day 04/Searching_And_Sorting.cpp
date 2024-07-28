#include<iostream>
using namespace std;

void sort(int arr1[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}

void search(int arr[], int len,int element)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==element)
        {
            cout<<"Element found at: "<<i;
            break;
        }
    }
}

int main(){
    int n,element;
    cout<<"Enter the Number of Elements for Sorting:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,n);
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int len = sizeof(arr);
    cout<<"Enter element to search: ";
    cin>>element;
    search(arr,len,element);
}