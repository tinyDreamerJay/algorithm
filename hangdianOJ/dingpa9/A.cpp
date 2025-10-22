#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

#define int long long
#define rep0(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define ci cin>>
#define ct cout<<
#define en <<'\n'
#define r0 return 0

using namespace std;
int a[20];
signed main(void){
	int T;
	cin>>T;
	while(T--){
		for(int i=0;i<10;i++){
			cin>>a[i];
		}
		int sum=0;
		sum+=a[0]+a[4]+a[8];
		//cout<<sum<<endl;
		int ans=a[6]+a[9];
		a[0]=0;
		a[4]=0;
		a[8]=0;
		int cc; 
		for(int i=0;i<10;i++){
			for(int j=0;j<9;j++){
				int num=i*10+j;
				if(num%4!=0){
					continue;
				}
				int count1,count2;
				if(i==6||i==9){
					count1=ans;
				}else{
					count1=a[i];
				}
				if(j==6||j==9){
					count2=ans;
				}else{
					count2=a[j];
				}
				if(i==j){
					cc=count1/2; 
					sum+=cc;
					a[i]-=cc*2;
					//cout<<i<<" "<<j<<" "<<count1/2<<endl;
				}else{
					if(i==6&&j==9){
						cc=ans/2;
						sum+=cc;
						ans-=cc*2;
						//cout<<i<<" "<<j<<" "<<cc<<endl;
					}else if(j==6&&i==9){
						cc=ans/2;
						sum+=cc;
						ans-=cc*2;
					}else{
						cc=min(count1,count2);
						if(i==6||i==9||j==6||j==9){
							ans-=cc;
						}
						sum+=cc;
						a[i]-=cc;
						a[j]-=cc;
					}
					
				}
			}
		}
		cout<<sum<<"\n";
	}
} 