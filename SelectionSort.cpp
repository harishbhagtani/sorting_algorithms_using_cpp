//Created by Harish Bhagtani on May 06, 2021
//C++ program to perform selection sort in Ascending and Descending order.

#include <iostream>
using namespace std;
class SelectionSort{

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

    //Algorithm to perform selection sort in Ascending Order
    void performSelectionSortInAscendingOrder(){
        cout<<"Performing Selection Sort in Ascending Order..."<<endl;
        for(int i = 0;i<MAX;i++){
            int min = arr[i];
            int loc = i;
            for(int j = i+1;j<MAX;j++){
                if(arr[j] < min){
                    min = arr[j];
                    loc = j;
                }
            }
            if(i != loc){
                swap(&arr[i],&arr[loc]);
            }
        }
    }

    //Algorithm to perform selection sort in Descending Order
    void performSelectionSortInDescendingOrder(){
        cout<<"Performing Selection Sort in Descending Order..."<<endl;
        for(int i = 0;i<MAX;i++){
            int max = arr[i];
            int loc = i;
            for(int j = i+1;j<MAX;j++){
                if(arr[j] > max){
                    max = arr[j];
                    loc = j;
                }
            }
            if(i != loc){
                swap(&arr[i],&arr[loc]);
            }
        }
    }

    void outputArray(){
        cout<<"Sorted array is: "<<endl;
        for(int i = 0;i < MAX;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl<<endl;
    }

    void swap(int* a, int* b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main() {
    SelectionSort selectionSort{};
    selectionSort.inputArray();
    selectionSort.performSelectionSortInAscendingOrder();
    selectionSort.outputArray();
    selectionSort.performSelectionSortInDescendingOrder();
    selectionSort.outputArray();
}
