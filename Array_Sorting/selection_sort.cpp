  
 
 #include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of your array: ";
    cin>>size;
    int arr[size];
    cout<< "Enter " <<size<< " elements:";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    
    cout<<"Your Array is : " ;
    for (int i =0; i<size;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    
    
    //Selection Sort Algorithm
    for(int i = 0; i< size - 1; i++){  
        
        // In this loop we are Using Linear Search
        int min_idx_ele = i; 
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min_idx_ele]){
            min_idx_ele = j;
        }
    }
    // Now we got our minimum element as j. And we have to swap the minimum element to the ith element 
    
            int temp = arr[i];
            arr[i] = arr[min_idx_ele];
            arr[min_idx_ele] = temp;
}

cout<<"Sorted Array using Selection sort: \n";
    for(int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout<< endl;
    return 0;
    }
