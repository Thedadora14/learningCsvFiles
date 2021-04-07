//
//  csvfiles.hpp
//  testProjects
//
//  Created by Theodore Toet on 4/5/21.
//

#ifndef csvfiles_hpp
#define csvfiles_hpp

#define FILE_PATH "/Users/theodoretoet/Desktop/Sammamish Appartment Bills.csv"

#include "filesAndPaths.hpp"
#include "textManipulation.hpp"
#include <map>
#include <sstream>
#include <stdio.h>
#include <vector>
using namespace std;


class csvData: protected dataFiles{
	
    int headerCount = 0;
    map<int, string> data;
    string tempLine;
    vector <string> headers;

public:
    csvData();
//	~csvData();
	
    int CountCsvColumns();
    void GetCsvData();
    void GetCsvHeaders();
    void ReadCsvData();
    void ReadCsvHeaders();
    
};

#endif /* csvfiles_hpp */
