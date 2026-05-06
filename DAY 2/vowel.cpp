# include <iostream>
using namespace std;
int main()
{
    char vowel;
    cout << "Enter a character: ";
    cin >> vowel;
    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' ||
        vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
    {
        cout << vowel << " is a vowel." << endl;
    }
    else
    {
        cout << vowel << " is  a consonant." << endl;
    }
    return 0;
}