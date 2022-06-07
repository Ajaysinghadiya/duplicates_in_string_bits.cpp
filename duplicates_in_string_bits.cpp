#include<iostream>
using namespace std;

int main()
{
    long int h=0,x=0;//creating two veriable of 4 bytes
    string str;
    cout <<"Enter the string to find the duplicates"<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        x=1;//initialising that one variable by 1
        x=x<<(str[i]-97);//shifting it left side
        if((x&h)>0)//if element is duplicate 
        cout<< str[i]<<" is the duplicate element "<<endl;
        else//else
        h=x|h;
    }
    return 0;
}
