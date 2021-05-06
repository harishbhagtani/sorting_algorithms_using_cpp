//Created by Harish Bhagtani on May 06, 2021
//C++ Program to perform insertion sort on Unsorted array in Ascending Order

#include <iostream>
using namespace std;

class InsertionSort{

    static const int MAX = 10;
    int arr[MAX];

public:

    void inputArray(){
        cout<<"Please input array: "<<endl;
        for(int i = 0;i < MAX;i++){
            cout<<"Please enter "<<i+1<<" element: ";
            cin>>arr[i];
        }
        cout<<endl;
    }

    void performInsertionSort(){
        for( int i = 0 ;i < MAX ; i++ ) {

            int temp = arr[ i ];
            int j = i;

            while(j > 0  && temp < arr[ j -1]) {
                arr[ j ] = arr[ j-1];
                j = j - 1;
            }
            arr[ j ] = temp;
        }
    }

    void outputArray(){
        cout<<"Sorted array is: "<<endl;
        for(int i = 0;i < MAX;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl<<endl;
    }
};


int main() {
    InsertionSort insertionSort{};
    insertionSort.inputArray();
    insertionSort.performInsertionSort();
    insertionSort.outputArray();
    return 0;
}
