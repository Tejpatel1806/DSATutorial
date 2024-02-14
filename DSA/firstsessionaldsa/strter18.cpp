// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int N,K;
//         cin>>N>>K;
//         int ans;
//         if(N%K==0)
//         {
//             ans=N/K;
//         }
//         else
//         {
//             int s=N/K;
//             ans=s+1;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         int max=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             if(a[i]>max)
//             {
//                 max=a[i];
//             }
//         }
//         vector<int> v;
//         for(int j=0;j<n;j++)
//         {
//            int x=max-a[j];
//            v.push_back(x);
//         }
//         sort(v.begin(),v.end());
//         cout<<v[v.size()-1]<<endl;
//     }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         char a[n];
//         char b[n];
//         cin>>a>>b;
//         int ans=0;
//         for (int i = 0; i < strlen(a); i++)
//         {
//             int count=0;
//             for (int j = i; j < strlen(a);j++)
//             {
//                 if(a[j]==b[j])
//                 {
//                     count++;
//                 }
//                 else if(a[j]<b[j])
//                 {
//                     ans++;
//                     break;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
// }