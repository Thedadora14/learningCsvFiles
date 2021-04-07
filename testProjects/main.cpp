//
//  main.cpp
//  testProjects
//
//  Created by Theodore Toet on 4/5/21.
//

#include "filesAndPaths.hpp"
#include "csvfiles.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
//    dataFiles asd;
    csvData df;
    df.ReadCsvHeaders();
	df.CountCsvColumns();
	df.GetCsvHeaders();
//	df.GetFileLocation();
//	cout << df.GetFilePath() << endl;
//	cout << df.GetFileType() << endl;
//	cout << df.GetFileName() << endl;
	return 0;
}
