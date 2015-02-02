#include<fstream>
#include<iostream>
using namespace std;

class alien
{
    char codeName[100];
    char bloodColor[50];
    int antennaCount,legCount;
    char homePlanet[50];
    public:void getData()
    {
        cout<<"Code Name : ";
        cin>>codeName;
        cout<<"Blood Color : ";
        cin>>bloodColor;
        cout<<"No. of Antennas : ";
        cin>>antennaCount;
        cout<<"No of Legs : ";
        cin>>legCount;
        cout<<"Home Planet : ";
        cin>>homePlanet;
    }
    void putData()
    {
        cout<<"Code Name : "<<codeName<<endl;
        cout<<"Blood Color : "<<bloodColor<<endl;
        cout<<"No. of Antennas : "<<antennaCount<<endl;
        cout<<"No. of legs : "<<legCount<<endl;
        cout<<"Home Planet : "<<homePlanet<<endl;
    }
    void fileWrite(fstream *file,alien *a)
    {
        (*file)<<(*a).codeName<<" "<<(*a).bloodColor<<" "<<(*a).antennaCount<<" "<<(*a).legCount<<" "<<(*a).homePlanet<<endl;

    }
};

int main()
{
    alien a;
    char choice ='y';
    fstream file("AlienReg.txt");
    while(choice == 'Y' || choice =='y')// choice driven program to check weather to take another entry or  not
    {
        a.getData(); // fetches all info and saves in variables
        a.fileWrite(&file,&a); // writes all info into a text file
        cout<<"Register another one, eh ?";
        cin>>choice;
    }

    cout<<"Registered a lot of 'em today !! ";
    file.close(); // disconnect stream object from file
    return 0;
}
