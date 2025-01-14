class CustomStack 
{
public:
    int arr[1000];
    int count = 0;
    int size = 0;
    
    CustomStack(int maxSize) 
    {
        size = maxSize;
    }
    
    void push(int x) 
    {
        if ( count < size ) 
            arr[count++] = x;        
    }
    
    int pop() 
    {
        if ( count > 0 )
            return arr[--count]; 
        return -1;
    }
    
    void increment(int k, int val) 
    {
        for ( int i=0; i<min(k,count); i++) 
            arr[i] += val;
    }
};
