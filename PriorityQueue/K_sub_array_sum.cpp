#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k , m;
	    cin>>n>>k>>m;
	    vector<int> nums(n);
	    for(int i = 0; i < n; i++)
	        cin>>nums[i];
	    
	    priority_queue<int>pq;
	    
	    int j = 0, i = 0;
	    int sum = 0;
	    while(j < n)
	    {
	        sum += nums[j];
	        
	        if(j - i + 1 == k)
	        {
	            pq.push(sum);
	            sum -= nums[i];
	            i++;
	        }
	        j++;
	    }
	    int x = 0;
	    while(x < m && !pq.empty())
	    {
	        cout<<pq.top()<<" ";
	        pq.pop();
	        x++;
	    }
	    cout<<endl;
	}
	return 0;
}