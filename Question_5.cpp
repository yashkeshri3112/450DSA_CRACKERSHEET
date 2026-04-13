#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int>&arr){
    //TWO-POINTER APPROACH->OPTIMAL APPROACH FOR THIS PROBLEM. 
    int left=0;//start pointer lena hai
    int right=arr.size()-1;//end pointer.
    while(left<right){
        //agar left side already negative haui to aage badho.
        if(arr[left]<0){
            left++;

        }
        //agar right side already positive hai ->peeche aao
        else if(arr[right]>0){
            right--;

        }
        //agar left pe positive aur right pe negative ->swap karo
        else{

            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
//driver code.
int main() {
    vector<int> arr = { -1, 2, -3, 4, -5, 6 };
    
    rearrange(arr);

    cout << "Final Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}

//TIME COMPLEXITY->O(n) WHERE n is size of array.
//SPACE COMPLEXITY->O(1)


//Naive approach -> using direct sorting -> sort(arr.begin(),arr.end()); 
//problem is time complexity will be 0(nlogn), SC-:o(1).

