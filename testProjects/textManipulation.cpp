//
//  textManipulation.cpp
//  agencyClass
//
//  Created by Theodore Toet on 3/28/21.
//

#include "textManipulation.hpp"


string properCaseList(string & original){
    
      string  temp;
      char previous = '\0';
    
    for (auto i = original.begin(); i != original.end(); i++){
        if (*i == original.front()){
            *i = toupper(*i);
        }
        if (previous == ' '){
            *i = toupper(*i);
        }
        previous = *i;
        temp += *i;
    }
    return(original = temp);
}

string& ltrim (string & ltrim){
    auto i = find_if(ltrim.begin(), ltrim.end(), [] (char c){
        return !isspace(c);
    });
    ltrim.erase(ltrim.begin(),i);
    return ltrim;
}
string& rtrim(string& rtrim)
{
    auto it = find_if(rtrim.rbegin(), rtrim.rend(),
                    [](char c) {
                        return !isspace(c);
                    });
    rtrim.erase(it.base(), rtrim.end());
    return rtrim;
}
 
string& trim(string& trim)
{
    return ltrim(rtrim(trim));
}
