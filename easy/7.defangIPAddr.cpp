/*
    1108. Defanging an IP Address

    Given a valid (IPv4) IP address, 
    return a defanged version of that IP address.

    A defanged IP address replaces every period "." with "[.]".
*/

#include<bits/stdc++.h>
using namespace std; 

string defangIPaddr(string address) {
    string defanged;
        
    for(auto c: address)
        (c == '.') ? defanged += "[.]" : defanged += c;
    return defanged;
}

int main() {
    string address;
    cout << "Enter IP address : ";
    getline(cin, address);

    string defanged = defangIPaddr(address);

    cout << "Defanged IP address : " << defanged << endl;
    
    return 0;
}