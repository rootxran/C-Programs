//Write a program to take character from user and then check if that character is vowel or consonant
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	char character;
	cout << "Enter a character: ";
	cin >> character;
  //making this condition to check if that character is alphabet or not
	switch((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		case 1://if entered character is alphabet
		{
			switch(character)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
				{
					cout << "Character is vowel"; break;
				}
				default: cout << "Character is consonant.";//if that character is not alphabet then it will be consonant
			}
			break;
		}
		case 0: cout << "Enter alphabet only."; break;//if entered character is not alphabet
	}	
	return 0;
}
