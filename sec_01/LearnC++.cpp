#include<iostream>

using namespace std;

//for arr it is always pass by refernece
void doSomething(int arr[])
{
    cout<<"value in function: "<<arr[0]<<endl;
    for(int i=0;i<5;i++){
        arr[i]+=10;
    }
}

int main()
{  

    int arr[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    doSomething(arr);
    cout<<"value in main: "<<arr[0]<<endl;
    // int arr[3][3];
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // string s = "Striver";
    // int len = s.size();
    // s[len-1] = 'z';
    // cout<<s;
    return 0;
}