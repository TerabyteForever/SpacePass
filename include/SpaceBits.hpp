/*This is a library for conversion of types into their binary form.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace SpaceBits{


            unsigned long int ConvertDecimalToBin(int value){
                    vector<int> temp;
                    std::string temporaryStr;
                    unsigned long int actualBin = 0;
                    int tempVecElem;
                    while(value != 0){

                         temp.insert(temp.begin(),value%2);
                         value = value/2;


                    }

                   for(auto x = 0; x < temp.size(); ++x){

                           tempVecElem = temp.at(x);
                        temporaryStr+=to_string(tempVecElem);




                   }

                        //cout<<temporaryStr; if you want to debug.

                    actualBin = atoi(temporaryStr.c_str());


                    return actualBin;


            }
            vector<int> ConvertDecimalToBinAsVec(int value){
                    vector<int> temp;
                    unsigned long int actualBin = 0;
                    while(value != 0){

                         temp.insert(temp.begin(),value%2);
                         value = value/2;


                    }


                return temp;


            }
            std::string ConvertDecimalToBinAsStr(int value){
                    vector<int> temp;
                    std::string temporaryStr;
                    unsigned long int actualBin = 0;
                    while(value != 0){

                         temp.insert(temp.begin(),value%2);
                         value = value/2;


                    }

                   for(auto x = 0; x < temp.size(); ++x){


                        temporaryStr+=to_string(temp.at(x));




                   }

                        return temporaryStr;

            }
int ConvertBinToDec(int value){



                    int dec_value = 0;

                    int base = 1;

                    int temp = value;

            while (temp) {
                    int last_digit = temp % 10;
                    temp /= 10;

                    dec_value += last_digit * base;

                    base *= 2;
                }


            return dec_value;






            }

int ConvertBinToDec(string val){


    int dec_value = 0;

    int base = 1;

    int temp = stoi(val);
    while (temp) {
        int last_digit = temp % 10;
        temp /= 10;

        dec_value += last_digit * base;

        base *= 2;
    }

    return dec_value;





            }




}
