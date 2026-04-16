//pehle humlog right shift krenge by 1 
int n=arr.size();//array ka size nikal gaya
if(n==o) return ; //agar array me ek bhi element nahi to return kar do.
int last=arr[n-1];//last name ke variable me array ka last element store kr dete hai.
for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];//current index par usse pehle wale index ka value aa raha hai.

}
arr[0]=last;

//left shift by 1  
int n=arr.size();//array ka size nikal gaya
if(n==0) return;//agar array me ek bhi element nahi to return kar do.
int first=arr[0];//first name ke variable me array ka first element store kr dete hai.
for(int i=0;i<n-1;i++){
    arr[i]=arr[i+1];

}
arr[n-1]=first; //iss dono case me bhi O(n) and sc O(1)

-----------------------------------------------------------------------------------------

//general case -: naive aprroach-: har baar loop chalana padega, TIME COMPLEXITY-:O(n.k)
//Right/left Rotate by k  -> time complexity-:O(n), sc-: O(1) -> optimised approach.

//right rotate by k
class Solution {
public:
    void rightRotate(vector<int>& arr, int k) {
        int n = arr.size();
        if(n == 0) return;
        k = k % n; // agar k > n ho toh modulo le lo

        // Step 1: Reverse whole array
        reverse(arr.begin(), arr.end());

        // Step 2: Reverse first k elements
        reverse(arr.begin(), arr.begin() + k);

        // Step 3: Reverse remaining n-k elements
        reverse(arr.begin() + k, arr.end());
    }
};


//left rotate by k
class Solution {
public:
    void leftRotate(vector<int>& arr, int k) {
        int n = arr.size();
        if(n == 0) return;
        k = k % n;

        // Step 1: Reverse first k elements
        reverse(arr.begin(), arr.begin() + k);

        // Step 2: Reverse remaining n-k elements
        reverse(arr.begin() + k, arr.end());

        // Step 3: Reverse whole array
        reverse(arr.begin(), arr.end());
    }
};


