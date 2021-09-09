#include <iostream>
using namespace std;
    int geekOnacciSeries(int A,int B,int C,int N){
    if(N<2){
        return A;
    } 
    int D=A+B+C;
    int n=--N;
    return geekOnacciSeries(B,C,D,n);
    }

    int main()
    {   int T;
        cin>>T;
        while(T--){
        int A,B,C,N;
        cin>>A>>B>>C>>N;
        int output=geekOnacciSeries(A,B,C,N);
        cout<<output;
	    
        // cout<<T;
        }
        return 0;

    }