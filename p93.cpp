#include <iostream>
using namespace std;
const int n=10;

main()
{
    int a[n] , i=2;
    a[0]=1;
    a[1]=1;
    cout<<a[0]<<endl;
    cout<<a[1];


    while(i<n)
{
     a[2]=a[0]+a[1];
     cout<<a[2]<<endl;
     a[0]=a[1];
     a[1]=a[2];
      i++;
}

}
