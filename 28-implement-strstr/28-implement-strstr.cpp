// class Solution {
// public:
// int strStr(string haystack, string needle) 
// {
//     //     if(needle=="")
//     //         return 0;
//     // if(haystack==needle)
//     //     return 0;
//     // if(haystack.length()<needle.length())
//     //     return -1;
//     //     int i=0;
//     //     int j=0;
//     //     while(haystack[i]!='\0')
//     //     {
//     //         // if(haystack[i]==needle[j])
//     //         // {
//     //         //     j++;
//     //         //     while(needle[j]!='\0')
//     //         //     {
//     //         //         if(needle[j]==haystack[i+j])
//     //         //         {
//     //         //             j++;
//     //         //         }
//     //         //     }
//     //         //     if(haystack[j]=='\0')
//     //         //             return i;
//     //         //         else
//     //         //             j=0;
//     //         // }
//     //         // i++;
//     //         while(haystack[i+j]==needle[j]&&needle[j]!='\0')
//     //         {
//     //             j++;
//     //         }
//     //         if(needle[j]=='\0')
//     //         {
//     //             return i;
//     //         }
//     //         else
//     //         {
//     //             j=0;
//     //             if(needle.length()<INT_MAX-i)
//     //                 i+=needle.length();
//     //             else
//     //                 break;
//     //         }
//     //     }
//     //     return -1;
// //     vector<int>match;
// //     for(int i=0;i<256;i++)
// //         match.push_back(needle.size());
// //     for(int i=0;i<needle.size();i++)
// //     {
// //         match[needle[i]]=needle.size()-i-1;
// //         if(i==needle.size()-1)
// //             match[needle[i]]=needle.size();
// //     }
// //     int j=needle.size()-1;
// //     int k=needle.size()-1;
// //     while(j<haystack.size())
// //     {
// //         if(needle[k]==haystack[j])
// //         {
// //             int x=k;
// //             while(needle[x]==haystack[j-needle.size()+1+x])
// //                 x--;
// //             if(x==-1)
// //                 return j-needle.size()+1;
// //         }
// //         j+=match[haystack[j]];
// //     }
    
// //     return -1;
    
// }
// };
class Solution {
public:
    vector<int> shiftTable(string needle, int m) {
        // An array from 0 - 255, with each index matching the respective ascii character
        vector<int> badMatch(256, m); // Initializes values of all the indexes to m
        for (int i = 0; i < m - 1; i++) {
            badMatch[(unsigned char) needle[i]] = m - 1 - i;
        }
        return badMatch;
    }
    
    int strStr(string haystack, string needle) {
        // get the value from the shifttable
        int n = haystack.size();
        int m = needle.size();
        vector<int> sftable = shiftTable(needle, m);
        int i = m - 1;
        
        while (i < n) {
            int j = 0;
            while (j < needle.size() && (haystack[i - j] == needle[m - 1 - j])) {
                j = j + 1;
            }
            
            if (j == m) return i - (m - 1);
            i += sftable[haystack[i]];
        }
        return -1;
    }
};