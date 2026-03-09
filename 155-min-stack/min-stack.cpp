class MinStack {
public:

    int* arr;
    int size;
    int topIndex;
    
    MinStack() {
        size = 10000;
        arr = new int[size];
        topIndex = -1;
    }
    
    void push(int val){
        if(topIndex == size-1){
            cout<<"Stack Overflow."<< endl;
        }
        else{
            topIndex++;
            arr[topIndex] = val;
        }
    }
    
    void pop(){
        if(topIndex == -1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            arr[topIndex] = 0;
            topIndex--;
        }
    }
    
    int top(){
        if(topIndex == -1){
            return -1;
        }
        return arr[topIndex];
    }
    
    int getMin() {
        int minVal = INT_MAX;
        int tempTop = topIndex;

        while(tempTop >= 0){
            if(arr[tempTop] < minVal){
                minVal = arr[tempTop];
            }
            tempTop--;
        }

        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */