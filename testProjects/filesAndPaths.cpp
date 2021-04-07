//
//  files.cpp
//  agencyClass
//
//  Created by Theodore Toet on 4/4/21.
//

#include "filesAndPaths.hpp"

// Constructor
dataFiles::dataFiles(){
//        GetFileLocation();
        assignFileNameType(filePath);
}

void dataFiles::assignFileNameType(string & filePath){
	
	string fileExtension;
    
	/*NPOS This value, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".*/
	if (filePath.find_last_of(".")!= string::npos){
		fileExtension = filePath.substr(filePath.find_last_of(".")+1);
		for (int i = 0; i < fileExtension.length(); i++){
			fileExtension[i] = tolower(fileExtension[i]);
		}
	}
	fileType = fileExtension;
	fileName = filePath.substr(filePath.find_last_of("/")+1);
}

//void dataFiles::GetFileLocation(){
//	cout << "Enter the flile location." << endl;
//	getline(cin, filePath);
//	assignFileNameType(filePath);
//}

void dataFiles::CheckFileCorrupt(){
    
    fstream fileCheck;
    fileCheck.open(filePath);
    if(fileCheck.fail()){
        cout << "The file is corrupted." << endl;
    }
    else{
        cout << "File is not corrupted." << endl;
    }
    fileCheck.close();
}

void dataFiles::CheckFileType(){
    
    if (fileType != "csv" || fileType != "txt" || fileType != "xml"){
            cout << "File ." << fileType << " opened successfully." << endl;
    }
    else{
        cout << "Enter a file ending in .csv, .txt, or .xml" << endl;
    }
}
