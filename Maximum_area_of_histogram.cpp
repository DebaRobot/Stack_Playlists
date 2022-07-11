#include <bits/stdc++.h>
using namespace std;

long long StockSpan(long long arr[], int n){

    vector<int> left,right;
    stack<pair<int,int>> s1,s2;
    int pseudo_index =-1;
    int pseudo_index1 =n;


    for (int i=0;i<n;i++)
    {
          if (s1.size()==0)
          {
            left.push_back(pseudo_index);
          }
          else if (s1.size()>0 && s1.top().first<arr[i])
          {
            left.push_back(s1.top().second);
          }
          else if (s1.size()>0 && s1.top().first>=arr[i])
          {
             while(s1.size()>0 && s1.top().first>=arr[i])
             {
               s1.pop();
             }
            if (s1.size()==0)
            {
              left.push_back(pseudo_index);
            }
             else
            {
              left.push_back(s1.top().second);
            }
          }
      s1.push({arr[i],i});
    }

    //NSR
    for (int i=n-1;i>=0;i--)
    {
      if (s2.size()==0)
      {
        right.push_back(pseudo_index1);
      }
      else if (s2.size()>0 && s2.top().first<arr[i])
      {
        right.push_back(s2.top().second);
      }
      else if (s2.size()>0 && s2.top().first >= arr[i])
      {
        while(s2.size()>0 && s2.top().first >= arr[i])
        {
          s2.pop();
        }
        if (s2.size()==0)
        {
          right.push_back(pseudo_index1);
        }
        else
        {
          right.push_back(s2.top().second);
        }
      }
      s2.push({arr[i],i});
    }
    reverse(right.begin(),right.end());

    long long  m = 0;
    for (long long  i=0;i<n;i++)
    {
      m=max(m,(right[i]-left[i]-1)*arr[i]); // taking max after finding area
    }
    return m;
  }




int main(){
    long long  input[] = {6, 2, 5, 4, 5, 1, 6};
    long long result = StockSpan(input,7);

    cout<<"Maximum Area of Histogram : " << result<<endl;

    return 0;
}

