#include <iostream>
#include <string>

bool isPalindrome(const std::string &text)
{

    for (int i = 0, j = text.length() - 1; i < j; ++i, --j)
    {
        if (text[i] != text[j])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    std::string palindrom = "";

    std::cin >> palindrom;

    if (isPalindrome(palindrom))
    {
        std::cout << "Palindrom"
                  << "\n";
    }
    else
    {
        std::cout << "Not palindrom"
                  << "\n";
    }
}