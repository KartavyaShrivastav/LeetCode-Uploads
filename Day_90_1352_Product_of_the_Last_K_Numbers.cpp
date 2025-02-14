#include<bits/stdc++.h>
using namespace std;

class ProductOfNumbers{
public:
    vector<int> arr{1};
    ProductOfNumbers() {
    }
    
    void add(int num) {
        if(num != 0){
            arr.push_back(num * arr.back());
        }
        else{
            arr.clear();
            arr.push_back(1);
        }
    }
    
    int getProduct(int k) {
        int n = arr.size();
        return k < n ? arr.back()/arr[n-k-1] : 0;
    }
};
