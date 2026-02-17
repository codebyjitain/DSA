#include <bits/stdc++.h>
using namespace std;

// unorderd map is the more priority than map


// by using these array for hasing we can only take values upto 10^6 in main and 10^7 in global and if we use bool we can have 10^7 in mainand 10^8 in global so to store value more than these we use map
// map
// int main(){
//     int arr[10];
//     map<int,int> mpp;
//     for (int i = 0; i < 10; i++)
//     {
//         cin>> arr[i];
//         mpp[arr[i]]++;
//     }

//     int num;
//     cout<<"Get Desired";
//     cin>> num;
//     cout<<endl<<mpp[num];
    

//     return 0;
// }






// for character
// int main()
// {
//     string str = "jatinbfabayeuybsunfdvsfsidgfuervboguidfhn";

//     int hash[26] = {0};
//     for (int i = 0; i < str.length(); i++)
//     {
//         hash[str[i]-'a'] += 1;
//     }

//     char ch;
//     cout<<"get Desired";
//     cin>>ch;
//     cout<<endl<<hash[ch-'a'];

//     return 0;
// }





// for number
// int main(){
//     int arr[10];
//     int element;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> element;
//         arr[i] = element;
//     }

//     int hash[11] = {0};
//     for (int i = 0; i < 10; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int number;
//     cout<<"get Desired";
//     cin>>number;
//     cout<<endl<<hash[number];

// }