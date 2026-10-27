#include <iostream>
using namespace std;
int BinarySearch(int const *arr, const int size,int key){
    int mid{};
    int start{};
    int end{size-1};
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {

            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
       
   }
    if(key <arr[mid])
        return mid;
      else 
      return mid +1;

}

int main()
{    int size = 7;
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    
    int key = 77;
    cout<<BinarySearch(arr,size,key);

    return 0;
}




