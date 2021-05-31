#include <iostream>
#include <cmath>
using namespace std;

long int func(long int n){
	n=abs(n);
	int first, last;
	if(n/10==0){
		return 0;
	}
	last=n%100;
	while(n/100!=0){
		n=n/10;
	}
	first=n;
	if (last==first){
		return 0;
	}
	else{
		return first-last;
	}
}

int main(){
	long int a, b, max, total=0;
	cin>>a;
	cin>>b;
	if(a>=b){
		max=b;
		for(long int i=b; i<=a; i++){
			if(func(i)!=0){
				if(i%func(i)==0){
					total++;
					if(i>max){
						max=i;
					}
				}
			}
		}
	}
	
	else{
		max=a;
		for(long int i=a; i<=b; i++){
			if(func(i)!=0){
				if(i%func(i)==0){
					total++;
					if(i>max){
						max=i;
					}
				}
			}
		}
		
	}
	if (total==0){
		max=0;
	}
	cout<<total<<" "<<max<<endl;
}
