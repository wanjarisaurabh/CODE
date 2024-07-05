
class Solution {
public:
    bool isAnagram(string str1, string str2) {
        // when both of the strings have different lengths
  if (str1.length() != str2.length())
    return false;
 
  int freq[26] = {0};
  int j =0;
  for (int i = 0; i < str1.length(); i++)
  {
    freq[str1[i] - 'a']++;
     freq[str2[i] - 'a']--;
     j++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)return false;
  }
  return true;
    }
};