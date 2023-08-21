// value অল্প সংখ্যক থাকলে কাউন্টিং সর্ট ই হলো অন্য যেকোনো সর্টিং এর চাইতে ফাস্ট
// একটা সর্টিং টেকনিক। যেমন, ২৬ টা ক্যারেক্টার এর মধ্যে সর্ট করা । (a,b,d....z)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }

// looping with integer type of iterator

    // for (int i = 0; i < 26; i++)
    // {
    //     if (freq[i] > 0)
    //     {
    //         // for (int j =0;j<freq[i];j++)
    //         while(freq[i]--)
    //         {
    //             char ch2 = i + 'a';
    //             cout << ch2 << " ";
    //         }
    //     }
    // }

// looping with character type of iterator

    for(char i ='a'; i<='z'; i++)
    {
        if(freq[i-'a'] > 0)
        {
            // cout<<freq[i-'a']<<" ";
            // cout<< i <<" ";
            // for(int j = 0; j<freq[i-'a']; j++)
            while(freq[i-'a']--)
            {
                cout<< i << " ";
            }
        }
    }

    return 0;
}