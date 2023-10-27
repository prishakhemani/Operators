#include <iostream>
#include<bitset>
using namespace std;

int b=2,a=4,c;

int main(){

    //Arthematic Operators
    cout<<"4<<2 = "<<(a<<2)<<endl;
    cout<<"4<<3 = "<<(a<<3)<<endl;
    cout<<"4<<4 = "<<(a<<4)<<endl;
    cout<<"12>>1 = "<<(12>>1)<<endl;
    cout<<"12<<1 = "<<(12<<1)<<endl;
    cout<<"12<<3 = "<<(12<<3)<<endl;
    cout<<"1<<1 = "<<(1<<1)<<endl;

    cout<<"4+2= "<<4+2<<endl;
    cout<<"4-2= "<<4-2<<endl;
    cout<<"4*2= "<<4*2<<endl;
    cout<<"4/2= "<<4/2<<endl;

    cout<<"a=a+b equals to "<<(a+=b)<<endl;
    cout<<"a=a-b equals to "<<(a-=b)<<endl;
    cout<<"a=a*b equals to "<<(a*=b)<<endl;
    cout<<"a=a/b equals to "<<(a/=b)<<endl<<" "<<endl;

    //Logic operators
    int dec;
    int num=0;
    cout<<"Enter a number:";
    cin>>dec;
    for(int i=0;i<20;i++)
    {
        if(dec&1)
        {
            num++;
        }
        dec=dec>>1;
    }
    cout<<"Number of 1(s) in binary form are "<<num<<endl<<" "<<endl;

    int Num,oddeven;

    cout<<"Enter a number =";
    cin>>Num;
    oddeven=Num&1;
    if (oddeven==1)
    cout<<"odd"<<endl<<" "<<endl;
    else
    cout<<"even"<<endl<<" "<<endl;
    
    //Number systems
    //included bitset library
    int myvar = 23;

    cout<<"My var = "<<myvar<<endl;
    cout<<"my var in hexadecimal = "<<showbase<<hex<<myvar<<endl;
    cout<<"my var in octal = "<<showbase<<oct<<myvar<<endl;
    cout<<"my var in binary = "<<bitset<10>(myvar);

    return 0;
}
