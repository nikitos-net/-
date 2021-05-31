    #include<iostream>
    #include<fstream>
    #include<string>
    using namespace std;
    int main(){
    string a;
    char ans;
    int max=0, k1, k2;
    ifstream fin("input.txt");
    fin >> a;
    
    string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for(int i=0; i<26; i++){
		k1=a.find(a[i]);
		k2=a.rfind(a[i]);
		if(k2-k1>max){
			max=k2-k1;
			ans=alf[i];
		}
	}
	cout<<ans<<" "<<max-1;
    
    }

