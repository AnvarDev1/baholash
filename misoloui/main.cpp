#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
       fstream ma("test.txt");
       fstream mb("test2.txt");
       string aaa;
       char b;
       for (int i=0;i<5;i++) {
        getline(ma,aaa);
        z:
        cout<<aaa<<"    ";
        cin>>b;
        if ('0'<b && b<'6') {
        mb <<aaa  +"    "+b<<endl;
        }
        else {
            cout<<"  Qayta baholang  !"<<endl;
            goto z;
        }
       }
       ma.close();
        mb.close();
       fstream mz("test.txt");
       fstream mc("test2.txt");

        for (int i=0;i<5;i++) {
        getline(mc,aaa);
        mz<<aaa<<endl;
        }
        mz.close();
        mc.close();
    return 0;
}
