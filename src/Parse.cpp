
#include "Parse.h"
#include <iostream>

namespace Xml  { namespace Parse {

    void trim(std::string& txt)
        {
            trim(txt, " \t\n\f\v\r");
        }
        void trim(std::string& txt, const std::string& chars)
        {
            trimStart(txt, chars);
            trimTrailing(txt, chars);
        }
        
        void trimStart(std::string& txt, const std::string& chars)
        {
            auto first = txt.find_first_not_of(chars);
            
            if (first == std::string::npos)
            {
                //trimTrailing(txt, chars);
                return;
            }

            txt = txt.substr(first);
            
           // trimTrailing(txt, chars);
        }
        
        void trimTrailing(std::string& txt, const std::string& chars)
        {
            auto last = txt.find_last_not_of(chars);
            
            if (last == std::string::npos) 
            {
                txt.clear();
                return;
            }
            
            txt = txt.substr(0, last + 1);
        }
        
         void eat(std::istream& txt, std::string const& edibles)
        {
             int count = 0;
             
             char c;
             while (txt >> std::noskipws >> c && edibles.find(c) != std::string::npos)
             {
                  count++;
             }
             
            txt.clear();
            txt.seekg(0, std::ios::beg);
            
             if (count > 0)
             {
                 txt.ignore(count);
             }
        }
}}