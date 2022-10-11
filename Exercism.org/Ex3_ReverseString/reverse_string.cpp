#include "reverse_string.h"

namespace reverse_string
{
    std::string reverse_string(std::string word)
    {
        std::string reverse_word = "";
        for (int i = word.size() - 1; i >= 0; i--)
        {
            reverse_word += word[i];
        }
        return reverse_word;
    }
} // namespace reverse_string
