/*

SpacePass

2020, Ali Sancakli

Made for educational purposes.


SpacePass is under the terms of MIT licence.


*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include "include/SpaceBits.hpp"

using namespace std;

namespace SpacePass{
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','W','X','Y','Z'};
    void BasicEncryption(char plaintext[], bool writeToFile){ //Basic level encryption. That method scans your string letter-by-letter and 

            
            
            for(int i = 0; i < strlen(plaintext) ; i++){

                    
                    for(int j = 0; j < 50; j++){


                                if(plaintext[i] == alphabet[j]){


                                        plaintext[i] = alphabet[j+1];
                                        break;

                                }
                                if(plaintext[i] == 'z' || plaintext[i] == "Z"){


                                        plaintext[i] = '0';


                                }



                    }




            }
            if(writeToFile == true){

            std::string filename = "basic_encrypted_text.txt";
            std::ofstream output_file(filename);

            output_file<<plaintext<<std::endl;
            output_file.eof();   
            std::cout<<"Encrypted text is written to the file "<<filename<<"."<<std::endl;

            }
         

    }

    void DecryptBasicEncryption(char text[]){

            for(int i = 0; i < strlen(text); i++){

                    
                    for(int j = 0; j < 50; j++){


                                if(text[i] == alphabet[j]){


                                        text[i] = alphabet[j-1];
                                        break;

                                }
                                if(text[i] == '0'){


                                        text[i] = 'z';
                                        break;

                                }




                    }




            }
                




    }








}