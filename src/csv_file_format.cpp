#include "csv_file_format.hpp"

// ----------------------------------------------------------------------------
// CTOR
// ----------------------------------------------------------------------------
CsvFileFormat::CsvFileFormat() {
}

// ----------------------------------------------------------------------------
// DTOR
// ----------------------------------------------------------------------------
CsvFileFormat::~CsvFileFormat() {
}

// ----------------------------------------------------------------------------
// setFileName
// ----------------------------------------------------------------------------
void setFileName(std::string fileNameNew) {
    _fileName = fileNameNew;
}
	
// ----------------------------------------------------------------------------
// getFileName
// ----------------------------------------------------------------------------
const std::string getFileName() const {
    return _fileName; 
}

// ----------------------------------------------------------------------------
// setData
// ----------------------------------------------------------------------------
void setData(std::vector<uint8_t> dataNew) {
    _data = dataNew;
}
	
// ----------------------------------------------------------------------------
// getData
// ----------------------------------------------------------------------------
const std::vector<uint8_t> getData() const {
    return _data;
}