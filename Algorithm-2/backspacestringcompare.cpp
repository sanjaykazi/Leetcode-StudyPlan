class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k=0,p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                k--;
                 k=max(0,k);
            }
            
           else
           {
               s[k]=s[i];
               k++;
           }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                p--;
                 p=max(0,p);
            }
            
           else
           {
               t[p]=t[i];
               p++;
           }
        }
        if(k!=p)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
        
    }
};

// class Solution {
// public:    
//     string getString(string &str) {
//         int n=str.length(), count=0;
//         string result="";
//         for(int i=n-1; i>=0; i--) {
//             char ch=str[i];
//             if(ch=='#') 
//                 count++;
//             else {
//                 if(count>0)
//                     count--;
//                 else {
//                     result+=ch;
//                 }                     
//             }
//         }
//         return result;        
//     }
    
//     bool backspaceCompare(string S, string T) {
//         return getString(S)==getString(T);
//     }
// };
// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char> s1,s2;
//         for(int i = 0; i<s.length(); i++){
//             if(s[i] != '#'){
//                 s1.push(s[i]);
//             }else if(!s1.empty() and s[i] =='#'){
//                 s1.pop();
//             }else{
//                 continue;
//             }
//         }
//         for(int i = 0; i<t.length(); i++){
//             if(t[i] != '#'){
//                 s2.push(t[i]);
//             }else if(!s2.empty() and t[i] =='#'){
//                 s2.pop();
//             }else{
//                 continue;
//             }
//         }
//         while(!s1.empty() and !s2.empty()){
//             if(s1.top() != s2.top()){
//                 return false;
//             }else{
//                 s1.pop();
//                 s2.pop();
//             }
//         }
//         if(!s1.empty() || !s2.empty()){
//             return false;
//         }else{
//             return true;
//         }
        
//     }
// };
