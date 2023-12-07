// Program for finding unique element in vector using xor operation
// This will only be able to find one unique element
#include<iostream>
#include<vector>
using namespace std;

// Function for finding unique element using XOR operation
// ^ is symbol for XOR operation
// This works on the logic that when we XOR any number with 0 we get the same number
// When we XOR it with itself we get 0
// Now in this code we will start with 0 and XOR with element
// At last all same elements will cancel themselves and only unique element will be stored in variable
// But this makes an assumption that the numbers should be in even or 2 pairs else it will not work
// Also it is only able to give one unique element 
// For more that one element it will return XOR of that two numbers
int find_Unique(vector<int> v){
    int un_Ele = 0;
    for(int i = 0; i < v.size(); i++){
        un_Ele = v[i] ^ v[i+1];
    }
    return un_Ele;
}

int main(){
    
    int a[] = {1,1,2,2,3,3,4};
    vector<int> v = {1,1,2,2,3,3,4};
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    // Finding Unique elements
    cout<<"Unique Element is: "<<find_Unique(v);

}   