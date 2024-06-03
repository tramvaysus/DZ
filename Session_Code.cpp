#include <iostream>
#include <bitset> 
#include <string> 
#include <vector>
#include <cmath>

class WordTransferToBinary
{
public:
    static std::string word_in_binary(std::string text)
    {
        std::string res;
        for (int i = 0; i < text.length(); i++)
        {
            std::bitset<8> bin_word(text[i]);
            res += bin_word.to_string() + " ";
        }
        std::cout << res;
        return res;
    }
};

class BinaryTransferToWord
{
public:
    static void binary_in_word(std::string text)
    {
        int result = 0;
        int j = 0;
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == '1')
            {
                result += (1 * pow(2, 7 - j));
            }
            else if (text[i] == '0')
            {
                result += 0;
            }
            else if (text[i] == ' ')
            {
                std::cout << static_cast<char>(result);
                result = 0;
                j = -1;
            }
            else {
                std::cout << "Некорректный символ в строке: " << text[i] << std::endl;
            }
            j++;
        }
    }
};

int main()
{
    setlocale(0, "");
    BinaryTransferToWord::binary_in_word(WordTransferToBinary::word_in_binary("sdfsdfsdf"));
    return 0;
}
