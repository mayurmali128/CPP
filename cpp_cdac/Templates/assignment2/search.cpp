#include<iostream>

using namespace std;

template <class t>
int search (t arr[], int n, t key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    double arr2[] = {1.2,1.3,1.4,1.5,1.6};

    int index = search(arr1,5,4);

    if(index==-1){
        cout<<"Elemets not found."<<endl;
    }
    else{
        cout<<"Element found at index : "<<index<<endl;
    }

    cout<<"--------------------------------------------------------------------------"<<endl;
    index = search(arr2,5,1.4);
    if(index==-1){
        cout<<"Elemets not found."<<endl;
    }
    else{
        cout<<"Element found at index : "<<index<<endl;
    }

}

