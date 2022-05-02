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
