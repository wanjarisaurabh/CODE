//brute - o(n^2)and o(n)
// exactly k distinct characters in a given string
#include<bits/stdc++.h>
using namespace std;

// Function to count number of substrings
// with exactly k unique characters
int countkDist(string str, int k)
{
    int n = str.length();

    // Initialize result
    int res = 0;

    // To store count of characters from 'a' to 'z'
    int cnt[26];

    // Consider all substrings beginning with
    // str[i]
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;

        // Initializing array with 0
        memset(cnt, 0, sizeof(cnt));

        // Consider all substrings between str[i..j]
        for (int j=i; j<n; j++)
        {
            // If this is a new character for this
            // substring, increment dist_count.
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;

            // Increment count of current character
            cnt[str[j] - 'a']++;

            // If distinct character count becomes k,
            // then increment result.
            if (dist_count == k)
                res++;
            if(dist_count > k) break;
        }
    }

    return res;
}

// Driver Program
int main()
{
    string str = "abcbaa";-
    int k = 3;
    cout << "Total substrings with exactly "
         << k <<" distinct characters :"
         << countkDist(str, k) << endl;
    return 0;
}


//optimal with o(n ) , and space is o(1)since we'r taking map but not so big 
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// the number of subarrays with at most K distinct elements
int most_k_chars(string& s, int k) 
{
    if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> map;
    int num = 0, left = 0;

    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) {
                map.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}
//give atendion on --- here we genrate all the substring less than k-1 
int exact_k_chars(string& s, int k)
{
    return most_k_chars(s, k) - most_k_chars(s, k - 1);
}

// Driver Program
int main()
{
    string s1 = "pqpqs";
    int k = 2;
    cout << "Total substrings with exactly " << k
         << " distinct characters : "
         << exact_k_chars(s1, k) << endl;

    string s2 = "aabab";
    k = 2;
    cout << "Total substrings with exactly " << k
         << " distinct characters : "
         << exact_k_chars(s2, k) << endl;
}