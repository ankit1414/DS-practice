#include<iostream>
using namespace std;
//this is general approach but can be done directly sorting in decending order
void sort(string unsorted){
    int arr[unsorted.size()];
    for(int i=0; i<unsorted.size(); i++){

        if(unsorted[i] == 'R'){
            arr[i] = 1;
        } else if(unsorted[i] == 'G'){
            arr[i] = 2;
        } else {
            arr[i] = 3;
        }
    }

    for(int i=0 ; i<unsorted.size(); i++){
        for(int j = 0 ; j<unsorted.size() - i - 1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                char tempc = unsorted[j];
                unsorted[j] = unsorted[j+1];
                unsorted[j+1] = tempc;
            }
        }
    }
    // NOW UNSORTED IS SORTED :D
    cout<<unsorted;
}
int main(){
    string input;
    cin>>input;
    sort(input);
    return 0;
}

