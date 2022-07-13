#include <bits/stdc++.h>
using namespace std;

vector<int> StockSpan(vector<int> arr, int n){

    stack<pair<int,int>> s;
    vector<int> v;


    for(int i = 0; i < n; i++){
            if(s.size() == 0){
                v.push_back(-1);
            }

            else if(s.size() > 0 && s.top().first > arr[i]){
                v.push_back(s.top().second);
            }
            else if(s.size() > 0 && s.top().first <= arr[i]){
                while(s.size() >0 && s.top().first <= arr[i]){
                    s.pop();
                }
                if(s.size() == 0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});


    }
    for (int i=0;i<v.size();i++)
    {
       v[i]=i-v[i]; // subtract normal index from the vector index v[i]
    }
    return v;
}

int main(){
    vector<int> input = { 100, 80, 60, 70, 60, 75, 85};
    vector<int> result = StockSpan(input,input.size());
    for (int i: result) {
        cout << i << ' ';
    }

    return 0;
}

