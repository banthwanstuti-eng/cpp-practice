#include<iostream>
#include<string>
using namespace std;
int main()
{
    string stream;
    cout<<"enter stream:";
    cin>>stream;
    if(stream=="science")
    {
        int pcm_marks;
        cout<<"enter PCM marks:";
        cin>>pcm_marks;
        if(pcm_marks>90)
        {
            cout<<"eligible for engineering course";
        }
    else
    cout<<"not eligible for engineering course";
    }
    else if(stream=="commerce")
    {
        int commerce_marks;
        cout<<"enter commerce marks:";
        cin>>commerce_marks;
        if(commerce_marks>90)
    {cout<<"eligible for B.com(Hons) course";}
    else
    cout<<"choose a suitable course";
 }
    return 0;
}