#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //first way to declare string:
    string str1="tej";
    cout<<str1<<endl;
    //second way to declare string:
    string str2(5,'m');
    cout<<str2<<endl;
    //when space vali string levi hou user jode tyare
    string str3;
    getline(cin,str3);
    cout<<str3<<endl;
    //string function
    string str4="fam";
    string str5="ily";
    cout<<str4.append(str5)<<endl;//aama pela str 4 family thai jase ane pachi family+ily thase
    cout<<str4+str5<<endl;
    cout<<str4[1]<<endl;
    //clear karva mate string ne
    string str6="poiiuytt hgjkijj";
    str6.clear();
    cout<<str6<<endl;
    //be string ne compare karva mate
    string str7="abc";
    string str8="abc";
    cout<<str8.compare(str7)<<endl;//jo answer greater than 1 means str8 moti che ane jo answer 0 to equal che otherwise nu samaji javu
    //string ma thi amuk character remove karva mate
    string str9="poiydhbdbcb";
    str9.erase(1,5);//first je position ae delete karvano hou  te and pachi te position thi ketla dur karva che te
    cout<<str9<<endl;
    //substring find karva mate
    string str10="ahsgdhshdh";
    cout<<str10.find("gdh")<<endl;//te gdh ni position batavse first aa case mate 3
    //string insert karva mate
    string str11="asdfgh";
    cout<<str11.insert(2,"pop")<<endl;//aano matlab second position par pop insert thai jase
    //string ni size janava mate
    string str12="abcdrg";
   cout<<str12.size()<<endl;
    cout<<str12.length()<<endl;
    //substring biji string ma store karva mate
    string str13="abcdefgh";
    string s=str13.substr(2,4);
    cout<<s<<endl;//matlab 2 position thi 4 character string s ma aavi ajse
    // numeric string ne integer ma fervva mate
    string str14="789";
    int x=stoi(str14);
    cout<<x<<endl;
    //integer ne string ma fervva mate
    int h=7894;
    cout<<to_string(h)<<endl;
    //string ma na character ne sort karva mate
    string str15="dcba";
    sort(str15.begin(),str15.end());
    cout<<str15<<endl;
    return 0;

}