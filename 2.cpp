INVERTED HALF PYRAMID:-

#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
}

output:-
4
****
***
**
*


HALF PYRAMID AFTER 180 DEGREE ROTATION:-

#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=n-i){
        cout<<" ";
    }
    else{
        cout<<"*";
    }
    }
    cout<<endl;
}

    return 0;
}

output:-
4
   *
  **
 ***
****

HALF PYRAMID USING NUMBERS

#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}

    return 0;
}

output:-
5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 


FLOYD'S TRIANGLE:-

#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int count=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       cout<<count<<" ";
       count++;
    }
    cout<<endl;
}
    return 0;
}

output:-
5
0 
1 2 
3 4 5 
6 7 8 9 
10 11 12 13 14 
