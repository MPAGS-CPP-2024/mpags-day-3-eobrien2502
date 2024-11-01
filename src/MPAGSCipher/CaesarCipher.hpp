#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>
#include<cstddef>

// Declaration of CaesarCipher class


class CaesarCipher {
    public:
        explicit CaesarCipher(const std::size_t key);

        explicit CaesarCipher(const std::string& key);

    
        // adding a member function to replace RunCaesarCipher to apply the caesar cipher to the input text and return the output text.
        // using the key_ data member as the key as we wnat it to be an unsigned long (or to have already been converted to one) when it's
        // used in this function.
        std::string applyCipher(const std::string& inputText, const CipherMode cipherMode) const;

    private:
        
        // the key_ data member
        std::size_t key_{0};

        //make the alphabet another data member
        // Create the alphabet container
        const std::vector<char> alphabet_= {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        
        const std::size_t alphabetSize_{alphabet_.size()};
};





#endif    // MPAGSCIPHER_CAESARCIPHER_HPP