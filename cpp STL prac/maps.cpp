#include <bits/stdc++.h>
using namespace std;
// maps stores the key value pairs
// maps are stored in a sorted order on the basis of the keys
// duplicate values of a single key cannot be stored but are basically rewritten
// keys and values can basically be accessed like a pair ie it.first and it.second

void print_map(map<int, string> m)
{ // O(n)
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(logn)
    m[5] = "mno";
    m[3] = "pqr";
    m.insert({7, "yug"});
    print_map(m);
    cout << "\n\n";
    m[3] = "xyz"; // overwritten
    print_map(m);
    // Some methods of maps
    cout << m.size() << endl; // returns size of m
    auto it = m.find(3);      // finds the key-value pair for the key and returns an iterator.. Usko humne auto me save karliya instead of specifying the whole dtype like map<int,string> :: iterator it.
    if (it == m.end()) // m.find returns m.end() if the key is not present
    {
        cout << "No such value present"; 
    }
    else
    {
        cout << it->first << " " << it->second << endl; // or (*it).first and (*it).second
    }
    m.erase(7); // or m.erase(it); // woh entryy gayab
    print_map(m);
    m.clear(); //pura map khaali

    

    return 0;
}