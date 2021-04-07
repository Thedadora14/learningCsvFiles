//
//  csvfiles.cpp
//  testProjects
//
//  Created by Theodore Toet on 4/5/21.
//

#include "csvfiles.hpp"


csvData::csvData(){
    dataFiles::GetFilePath();
    dataFiles::CheckFileType();
    dataFiles::CheckFileCorrupt();
}

int csvData::CountCsvColumns(){
	
	    for (auto i = headers.begin(); i != headers.end(); i++){
			++headerCount;
		}
	return headerCount;

}

void csvData::GetCsvData(){
	
}

void csvData::GetCsvHeaders(){
	
	for (auto i = headers.begin(); i != headers.end(); i++){
		cout << *i << endl;
	}
    
}

void csvData::ReadCsvData(){
	ifstream inFile;
	inFile.open(dataFiles::GetFilePath());
	
	string line, data;
	getline(inFile, line);
	stringstream buffer(line);
	
	while (getline(buffer, data, ',')){
		trim(data);
		// read data to a map...
	}
	inFile.close();
	
}
    
void csvData::ReadCsvHeaders(){
    ifstream inFile;
    inFile.open(dataFiles::GetFilePath());
    
    string line, header;
    getline(inFile, line);
    stringstream buffer(line);
    
    while (getline(buffer, header, ',')){
        trim(header);
        headers.push_back(header);
    }
    inFile.close();

}
