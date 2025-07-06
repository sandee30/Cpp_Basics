
/* Write a program to find the positions of the character entered by the user from the sentence "idea without execution is worthless" using a pointer and string(array of characters). */


#include<iostream>
using namespace std;

int main()
{
    char sentence[] = "idea without execution is worthless";
    char* ptr = sentence;
    char ch;
    bool flag = false;
    cout<<"Enter a character to find it's position: ";
    cin>>ch;
    cout<<"The position(s) of '"<<ch<<"': ";
    for(int i=0; ptr[i]!='\0'; i++){
        if(ptr[i]==ch){
            flag = true;
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    if(!flag){
        cout<<"Character '"<<ch<<"' not found !";
    }
    return 0;
}