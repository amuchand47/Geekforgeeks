#include <bits/stdc++.h>
using namespace std;

/* Search an element in a sorted and rotated array
   Created on 17:21 , 01-12-2019
*/

int b_search(int a[], int l, int h, int k){
 if(h<l)
    return -1;
 int m = (l+h)/2 ;

 if(k==a[m])
    return m;
 if(k>a[m])
    return b_search(a, m+1, h, k);
 if(k<a[m])
    return b_search(a, l, m-1, k);
}

int pivot_find(int a[], int l, int h){

if(h<l)
    return -1;
if(h==l)
    return l;

int m = (l+h)/2;

if(m<h && a[m]>a[m+1])
    return m;

if(m>l && a[m]<a[m-1])
    return (m-1);

if(a[l]>=a[m])
    return pivot_find(a, l, m-1);

return pivot_find(a, m+1, h );

}

int mid_pivot_bin_search(int a[], int n, int k){

  int pt = pivot_find(a, 0, n-1);


  if(pt == -1)
    return b_search(a, 0, n-1, k);
  if(a[pt]==k)
    return pt;
  if(a[0]<k)
    return b_search(a, 0, pt-1, k);
  return b_search(a, pt+1, n-1, k);
}

int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];

int k;
cin>>k;

//int x = b_search(a, 0, n, k);     Example : input: 9
//cout<<x;                                    7 8 9 1 2 3 4 5 6
//                                            9
//                                            Output : 2 in  O(log(n))

int y = mid_pivot_bin_search(a, n, k);
cout<<y;
return 0;
}
