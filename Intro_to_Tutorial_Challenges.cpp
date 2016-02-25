#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int V;
    int n;
    cin >> V; cin.ignore();
    cin >> n; cin.ignore();
    int vector[n];
    for( int i=0; i<n; i++)
    {
        cin >> vector[i];
        if( vector[i] == V) cout << i;
        
    }
    return 0;
}