//
//  files.hpp
//  agencyClass
//
//  Created by Theodore Toet on 4/4/21.
//

#ifndef files_hpp
#define files_hpp

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class dataFiles{
	
//    bool fileFailed = false;
	string fileName;
	string filePath = "/Users/TheodoreToet/Library/Developer/Xcode/DerivedData/testProjects-brtsgohqtczqulbjsussbxygflrq/Build/Products/Debug/Snohomish Particiopants.csv";
	string fileType;
	
protected:
	
	string GetFileName(){return fileName;}
	string GetFilePath(){return filePath;}
	string GetFileType(){return fileType;}
    void assignFileNameType(string &);
    void CheckFileCorrupt();
    void CheckFileType();
    


	
public:
    dataFiles();
    void GetFileLocation();
};

#endif /* files_hpp */
