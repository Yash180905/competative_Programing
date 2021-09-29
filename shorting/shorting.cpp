#include <bits/stdc++.h>
using namespace std;
void runtime_terror(int t)
{
  long long n,m,p,q;
  cin>>n>>m>>p>>q;
  vector<pair<int,string>> one;
  vector<pair<int,string>> two;
  vector<pair<int,string>> ans;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    int x;
    cin>>x;
    one.push_back({x,s});
  }
  for(int i=0;i<m;i++)
  {
    string s1;
    cin>>s1;
    int y;
    cin>>y;
    two.push_back({y,s1});
  }
  sort(one.begin(),one.end());
  sort(two.begin(),two.end());
 for(int i=0;i<p;i++)
 {
   ans.push_back({one[i].first,one[i].second});
 }
 for(int i=0;i<q;i++)
 {
   ans.push_back({two[i].first,two[i].second});
 }
 sort(ans.begin(),ans.end());
  for(auto it:ans)
  cout<<it.second<<" ";
  cout<<endl;
}
signed assignment_problem(){
//   faster_io ;
//   //  file_io_cf;
  long long t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
     runtime_terror(i);
   }
    return 0;
}

int BubleShort(int arr[], int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    return 0;
}

void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1; //length of one side of divided array
    int n2 = r - mid;     //length of other side of divided array
    int a[n1], b[n2];     // themperory array for staoring the frgement and comparing

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = l; // for travesrsing the main arrey   i for travesrsing a,j for travearsing b,and k for main arrey

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
    }
}

void mergeShort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeShort(arr, l, mid);
        mergeShort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int partetion(int arr[], int l, int r)
{
    int pi = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pi)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;

    return i + 1;
}

void quickShort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partetion(arr, l, r);
        quickShort(arr, l, pi - 1);
        quickShort(arr, pi + 1, r);
    }
}
int PrintArray(int arr[], int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int n;
    cout << "enter the size of array"
         << " ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array"
         << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "please enter your choice which sorting method you want to use"
         << "  1. for Buble  2. for merge  3. for Quick 4.assigenment_problem (in this case give input as specified by problem)"
         << endl;

    int c;
    cin >> c;
    switch (c)
    {
    case 1:
        BubleShort(arr, n);
        break;
    case 2:
        mergeShort(arr, 0, n - 1);
        break;
    case 3:
        quickShort(arr, 0, n);
        break;
    
    case 4:
       assignment_problem();
       break;
    default:
        cout << "! sorry wrong choice ";
    } 
    // BubleShort(arr, n);
    // mergeShort(arr, 0, n - 1);
    // quickShort(arr,0,n);
    PrintArray(arr, n);

    return 0;
}