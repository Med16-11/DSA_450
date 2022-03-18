int main()
{
    string s = "medhavi singh";
    map<char, int>m;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    
    for(auto it: m){
        if(it.second > 1){
            cout<<it.first<<" "<<"count = "<<it.second <<endl;
        }
    }
    return 0;
}
