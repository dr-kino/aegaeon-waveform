#include "raw_file_format.hpp"

/// ----------------------------------------------------------------------------
// Constructor
// ----------------------------------------------------------------------------
RawFileFormat::RawFileFormat()
{
}

// ----------------------------------------------------------------------------
// Destructor
// ----------------------------------------------------------------------------
RawFileFormat::~RawFileFormat()
{
}
// ----------------------------------------------------------------------------
// ReadInputData
// ----------------------------------------------------------------------------
bool RawFileFormat::readInputData(std::string fileName)
{
    return true;
}

// ----------------------------------------------------------------------------
// setFileName
// ----------------------------------------------------------------------------
void RawFileFormat::setFileName(std::string fileNameNew)
{
    _fileName = fileNameNew;
}

// ----------------------------------------------------------------------------
// getFileName
// ----------------------------------------------------------------------------
const std::string RawFileFormat::getFileName() const
{
    return _fileName;
}

// ----------------------------------------------------------------------------
// setData
// ----------------------------------------------------------------------------
void RawFileFormat::setData(std::vector<uint8_t>dataNew)
{
    _data = dataNew;
}

// ----------------------------------------------------------------------------
// getName
// ----------------------------------------------------------------------------
const std::vector<uint8_t>RawFileFormat::getData() const
{
    return _data;
}
