#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>

// Declaration of a new data structure ProgramSettings that will hold all of the information 
// about the arguments given on the command line.
struct ProgramSettings {
    bool helpRequested;
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipherKey;
    CipherMode cipherMode;
};

bool processCommandLine(const std::vector<std::string>& cmdLineArgs, ProgramSettings& settings);


#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP