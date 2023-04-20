#include <iostream>
#include <algorithm>
using namespace std;
bool Pal(string s)
{
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != s[s.size()-i-1])
		return false;
	}
	return true;
}
int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	if(Pal(s)) cout << "Luffy is the pirate king!";
	else
	{
		bool target = false;
		while(next_permutation(s.begin(), s.end()))
		{
			if(Pal(s))
			{
				target = true;
				break;
			}
		}
		if(target == true) cout << "Luffy is the pirate king!";
		else cout << "Onepiece";
	}
}