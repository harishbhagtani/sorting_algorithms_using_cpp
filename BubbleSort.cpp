//Created by Harish Bhagtani on May 05, 2021
//C++ Program to implement bubble sort on an integer array

/*
 * Bubble Sort: It is the simplest sorting algorithm. It repeatedly swaps
 * adjacent elements until the array is fully sorted in any given order.
 */

#include <iostream>
using namespace std;

class BubbleSort{

    static const int MAX = 10;

    int arr[MAX];
    int sortOrder;



public:

    static const int ORDER_ASCENDING = 0;
    static const int ORDER_DESCENDING = 1;

    BubbleSort() {
        sortOrder = ORDER_ASCENDING;
    }

    void inputArray(){
        cout<<"Start inserting to array..."<<endl<<endl;
        for(int i = 0;i < MAX;i++){
            cout<<"Please enter "<<i+1<<" element: ";
            cin>>arr[i];
        }
    }

    void setSortOrder(int sortOrder){
        this->sortOrder = sortOrder;
    }

    void performBubbleSort(){

        //Flag to check if the array is already sorted
        //If any unsorted element present, flag will be set 1 inside the inner loop and
        // outer loop will be executed again.
        //If array is sorted, flag will remain 0 and outer loop will be terminated
        int flag = 1;

        switch (sortOrder){

            //If sortOrder is ASCENDING(0), this case will be executed
            case ORDER_ASCENDING:{

                //Algorithm to perform bubble sort in ascending order
                for(int i = 0;i < MAX - 1 && flag == 1;i++){
                    flag = 0;
                    for(int j = 0;j < MAX - 1 - i;j++){
                            if(arr[j] > arr[j + 1]){
                                flag = 1;
                                swap(&arr[j], &arr[j+1]);
                            }
                    }
                }
            }break;

            //If the sortOrder is DESCENDING(1), this case will be executed
            case ORDER_DESCENDING:{

                //Algorithm to perform bubble sort in descending order
                for(int i = 0;i < MAX - 1 && flag == 1;i++){
                    flag = 0;
                    for(int j = 0;j < MAX - 1 - i;j++){
                            if(arr[j] < arr[j + 1]){
                                flag = 1;
                                swap(&arr[j], &arr[j+1]);
                            }
                    }
                }
            }break;
        }
    }

    void swap(int* a, int* b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    void outputSortedArray(){
        cout<<"The sorted array is: "<<endl;
        for(int i = 0;i < MAX;i++){
            cout<<arr[i]<<"\t";
        }
    }
};

//Driver Function
int main() {
    BubbleSort bubbleSort{};
    bubbleSort.inputArray();
    bubbleSort.setSortOrder(BubbleSort::ORDER_ASCENDING);
    bubbleSort.performBubbleSort();
    bubbleSort.outputSortedArray();
    return 0;
}
