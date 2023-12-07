// To Use auto as iterator
#include <vector>
#include <iostream>

using namespace std;

int main() {

    int arr[] = {12,34,56,67};

    cout<<"Traversing Array Using Auto"<<endl;

    for(auto i : arr){
        cout<<i<<" ";
    }
    vector<int> vec = {1, 2, 3, 4, 5};

    cout<<"\nTraversing Vector Using Auto:"<<endl;

    // Using auto with iterators
    // Instead of Having to write a loop variable and specify condition we can directly use auto to traverse Vector 

    /*
    Here `auto` is used to automatically deduce the type of the iterator variable `i` as it 
    iterates over elements of the container Vector `vec`, simplifying code and enhancing readability.*/

    /*
    
    How does the range-based for loop using `auto` determine its starting and terminating 
    conditions when iterating over a container like `vec`?
    
    Answer:
    In the range-based for loop with `auto i : vec`, `auto` deduces the iterator type. The loop starts at `vec.begin()`
    and ends at `vec.end()`, iterating over container elements.
    
    */
    for (auto i : vec) {
        cout << i << " ";
    }

    cout<<"\nTraversing Vector Using Auto and Specifying the Begin and End for Vector:"<<endl;

    // We can also use it like this

    // Using auto with iterators
    for (auto it = vec.begin(); it != vec.end(); ++it) {

        /*
        In a range-based for loop, `auto it` represents an 
        iterator pointing to elements in the container `vec`. 
        Dereferencing (`*it`) is the act of accessing the value
        the iterator points to, allowing manipulation or retrieval of the actual element.
        */
        cout << *it << " ";
    }

    return 0;
}
