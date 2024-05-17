#include<bits/stdc++.h>
using namespace std;

void computeLPS(string P, vector<int> &lps){
    int i = 1; 
    int j = 0; 
    lps[0] = 0; // first element of lps is always 0
    while(i<P.size()){ 
        if(P[i] == P[j]){ // if characters match then set lps[i] = j+1 and increment both
            lps[i] = j+1;  
            i++;
            j++;
        }
        else{
            if(j != 0){ // if characters dont match 
                j = lps[j-1]; 
            }
            else{
                lps[i] = 0; // if j is at 0 then set lps[i] = 0 and increment i
                i++; 
            }
        }
    }
}

void KMP(string T, string P){
    int n = T.length();
    int m = P.length();
    vector<int> lps(m);
    computeLPS(P,lps);
    int i = 0;
    int j = 0;
    while(i < n){ // i is for text and j is for pattern
        if(T[i] == P[j]){ // if characters match then increment both
            i++;
            j++;
        }
        else{ // if characters don't match
            if(j != 0){
                j = lps[j-1]; // move j to the last matching character
            }
            else{
                i++; // if j is at 0 then increment i
            }
        }

        if(j == m){
            cout << "Pattern found at index: " << i-j << endl; // pattern found at i-j
            j = lps[j-1]; // for multiple occurences
        }
    }

}

int main(){
    string T = "onionionspl";
    string P = "onions";

    KMP(T,P);

    return 0;
}