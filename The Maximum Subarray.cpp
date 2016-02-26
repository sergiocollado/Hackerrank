#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T,N;
    cin >> T; 
    
    for(int m=0; m<T; ++m)
    {
        cin >> N;
        
        int array[N];
        
        int max_so_far      = -1e6;
        int max_ending_here = 0;
        int max_element     = -1e6;
        
        int max_contiguos   =0;
        int max_uncontiguos =0;
        
        for(int n=0; n<N; ++n)
        {
            cin >> array[n];

            //contiguos: kadane's algorithm
            max_ending_here = max(max_ending_here + array[n], 0);
            max_so_far      = max(max_ending_here, max_so_far);
            max_element     = max(max_element, array[n]);
            //cerr<<"it:"<<n<<endl;
            //cerr<<"max_ending_here: "<< max_ending_here<<endl;
            //cerr<<"max_so_far:      "<< max_so_far<<endl;
            //cerr<<"max_element:     "<< max_element<<endl<<endl;
            //uncontiguos
            if( array[n] > 0) max_uncontiguos += array[n];
        }
        
       if (max_so_far == 0)     max_so_far = max_element;
        
       max_contiguos = max_so_far;
        
       if(max_uncontiguos ==0) max_uncontiguos= max_element;
        
       cout << max_contiguos << " " << max_uncontiguos << endl;   
    }
    return 0;
}
