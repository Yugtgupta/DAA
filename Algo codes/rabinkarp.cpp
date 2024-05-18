#include <bits/stdc++.h>
using namespace std;

bool finalcompare(string a,string b){
    int n = a.length();
    int m = b.length();
    for(int i = 0;i<n;i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int hashvalue(string s){
	int n = s.length();
	int hash = 0;
	for(int i = n-1;i>=0;i--){
		hash = hash + (pow(10,n-i-1)*(s[i]-'a'+1));
	}
	return hash;
}

void rabin_karp(string a,string b){
	int n = a.length();
	int m = b.length();
	int hashvaluetocheck = hashvalue(b);
	string z = a.substr(0,m);
	int starthashvalue = hashvalue(z);
	if(starthashvalue == hashvaluetocheck && (finalcompare(z,b)) )cout<<"string found at index : 0\n";
	for(int i = m;i<n;i++){
		starthashvalue = ((starthashvalue)-((a[i-m]-'a'+1)*(pow(10,m-1))))*10 + (a[i]-'a'+1);
		if(starthashvalue == hashvaluetocheck && (finalcompare(a.substr(i-m+1,i+1),b)) )cout<<"string found at index : "<<i-m+1<<"\n";
	}
}

int main(){
	string a,b;
	cout<<"enter pattern\n";
	cin >> a;
	cout<<"enter text\n";
	cin >> b;
	rabin_karp(a,b);
}