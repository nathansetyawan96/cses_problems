#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
typedef long long ll;
int main()
{
    ll count, max = 1;
    char c;
    string dna;
    cin >> dna;
    ll length = dna.length();
    for (ll i = 0; i < length-1; )
    {
        c = dna[i];
        count = 1;
        for (ll j = i + 1; j < length; j++)
        {
            if(dna[j] == c) count++;
            else break;
        }
        if(count > max) max = count;
        i = i+count; // skip a section of similar characters
    }

    cout << max << endl;
    return 0;
}