#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,n,b;
        cin>>x>>n>>b;
        int a[n];
        x=x-b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int items=0;
        for(int i=0;i<n;i++){
            if((x-a[i])<0){
                break;
            }
            else{
                items++;
                x=x-a[i];
            }
        }
        cout<<items<<endl;
	}
	return 0;
}
