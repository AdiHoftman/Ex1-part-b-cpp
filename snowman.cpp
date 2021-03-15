#include <iostream>
#include <string>
#include "snowman.hpp"
#include <bits/stdc++.h>
using namespace std;
const int Ten = 10, Hundred = 100, Thousand = 1000, TenThousand = 10000, HundredThousand = 100000, Million = 1000000, TenMillion = 10000000;

namespace ariel{

    bool isDigitContains(long number){
        while(number != 0){
            if(number%Ten > 4 || number%Ten < 1) {return false;}
              number = number/Ten;  
        }
        return true;    
    }

     int countDigit(long n)
    {
        int count = 0;
        while (n != 0) 
        {
            n = n / Ten;
            ++count;
        }
        return count;
    }

    string snowman(long number){
        const int Digit = 8;
        if(countDigit(number) == Digit && isDigitContains(number)){
                string str;
                while(number != 0){
                    switch (number/TenMillion%Ten) //Hat
                    {
                        case 1:
                            str.append("\n _===_\n"); 
                            break;
        
                        case 2:
                            str.append("\n  ___\n");
                            str.append(" .....\n");
                            break;
        
                        case 3:
                            str.append("\n   _\n");
                            str.append("  /_\\\n");
                            break;
        
                        case 4:
                            str.append("\n  ___\n");
                            str.append(" (_*_)\n");
                            break;
                    }

                    switch (number/Thousand%Ten) //Right arm
                    {
                        case 2:
                            str.append("\\");
                            break;
                    }

                    switch (number/HundredThousand%Ten) //Right eye
                    {
                        case 1:
                            if(number/Thousand%Ten != 2){
                                str.append(" ");
                            }
                            str.append("(.");
                            break;
        
                        case 2:
                            if(number/Thousand%Ten != 2){
                                str.append(" ");
                            }
                            str.append("(o");
                            break;
        
                        case 3:
                            if(number/Thousand%Ten != 2){
                                str.append(" ");
                            }
                            str.append("(O");
                            break;

                        case 4:
                            if(number/Thousand%Ten != 2){
                                str.append(" ");
                            }
                            str.append("(-");
                            break;
                    }

                    switch (number/Million%Ten) //Nose
                    {
                        case 1:
                            str.append(",");
                            break;
        
                        case 2:
                            str.append(".");
                            break;
        
                        case 3:
                            str.append("_");
                            break;
        
                        case 4:
                            str.append(" ");
                            break;
                    }

                    switch (number/TenThousand%Ten) //Left eye
                    {
                        case 1:
                            str.append(".)");
                            if(number/Hundred%Ten != 2){
                                str.append("\n");
                            }
                            break;
        
                        case 2:
                            str.append("o)");
                            if(number/Hundred%Ten != 2){
                                str.append("\n");
                            }
                            break;

                        case 3:
                            str.append("O)");
                            if(number/Hundred%Ten != 2){
                                str.append("\n");
                            }
                            break;

                        case 4:
                            str.append("-)");
                            if(number/Hundred%Ten != 2){
                                str.append("\n");
                            }
                            break;
                    }

                    switch (number/Hundred%Ten) //Left arm
                    {        
                        case 2:
                            str.append("/\n");
                            break;
                    }

                    switch (number/Thousand%Ten) //Right arm
                    {
                        case 1:
                            str.append("<");
                            break;
        
                        case 3:
                            str.append("/");
                            break;
        
                        case 4:
                            str.append(" ");
                            break;
                    }

                    switch (number/Ten%Ten) //Torso
                    {
                        case 1:
                            if(number/Thousand%Ten == 2){
                                str.append(" ");
                            }
                            str.append("( : )");
                            if(number/Hundred%Ten == 2){
                                str.append("\n");
                            }
                            break;
        
                        case 2:
                            if(number/Thousand%Ten == 2){
                                str.append(" ");
                            }
                            str.append("(] [)");
                            if(number/Hundred%Ten == 2){
                            str.append("\n");
                            }
                            break;
        
                        case 3:
                            if(number/Thousand%Ten == 2){
                                str.append(" ");
                            }
                            str.append("(> <)");
                            if(number/Hundred%Ten == 2){
                                str.append("\n");
                            }
                            break;

                        case 4:
                            if(number/Thousand%Ten == 2){
                                str.append(" ");
                            }
                            str.append("(   )");
                            if(number/Hundred%Ten == 2){
                                str.append("\n");
                            }
                            break;
                    }

                    switch (number/Hundred%Ten) //Left arm
                    {
                        case 1:
                            str.append(">\n");
                            break;
        
                        case 3:
                            str.append("\\\n");
                            break;
        
                        case 4:
                            str.append("\n");
                            break;
                    }

                    switch (number%Ten) //Base
                    {
                        case 1:
                            str.append(" ( : )");
                            break;
        
                        case 2:
                            str.append(" (\" \")") ;
                            break;

                        case 3:
                            str.append(" (___)");
                            break;

                        case 4:
                            str.append(" (   )");
                            break;
                    }
                        return str;
                }
            }
        throw std::out_of_range("bad input!");    
    }
}; 