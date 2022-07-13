#include <bits/stdc++.h>
using namespace std;

vector<int> nextNearestgreatest(vector<int> arr, int n){

    stack<int>s;
    vector<int> v;


    for(int i = n - 1; i>= 0; i--){
            if(s.size() == 0){
                v.push_back(-1);
            }

            else if(s.size() > 0 && s.top() > arr[i]){
                v.push_back(s.top());
            }
            else if(s.size() > 0 && s.top() <= arr[i]){
                while(s.size() >0 && s.top()<= arr[i]){
                    s.pop();
                }
                if(s.size() == 0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);


    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    vector<int> input = { 1, 3, 2, 4 };
    vector<int> result = nextNearestgreatest(input,input.size());
    for (int i: result) {
        cout << i << ' ';
    }

    return 0;
}

