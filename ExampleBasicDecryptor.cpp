#include "SpacePass.hpp"

int main(){

        char text[] = "zpwdbonblfnfdwtupnj0bcmfbmtp"; //which I've encrypted using Example Basic Encryptor.
        cout<<"Before decryption : "<<text<<endl;
        SpacePass::DecryptBasicEncryption(text);
        cout<<"After decryption : "<<text<<endl;




    return 0;
}