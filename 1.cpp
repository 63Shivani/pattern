#include <iostream>

using namespace std;

int main()
{
int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
}

output:-
5
4
****
****
****
****
****


HOLLOW RECTANGLE PATTERN

#include <iostream>

using namespace std;

int main()
{
int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i==1 || row==i || col==j || j==1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}

output:-
5 4
****
*  *
*  *
*  *
****
