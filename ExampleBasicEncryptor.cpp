#include "SpacePass.hpp"

using namespace std;

int main(){
        char decision;
        bool question = false;
        cout<<"Do you want to write the encrypted string to a file? (y/n)"<<endl;
        cin>>decision;
        switch(decision)
        {
        case 'y':
            question = true;
            break;
        case 'n':
            question = false;
            break;
        default:
            cout<<"I didn't understand you. So, I am closing myself. Bye bye!"<<endl;
            exit(0);
            break;
        }
        char str[] = "youcanmakemecustomizablealso";
        cout<<"Original version of our string is : "<<str<<endl;
        SpacePass::BasicEncryption(str,question);
        cout<<"Encrypted version of our string is : "<<str<<endl;



    return 0;
}