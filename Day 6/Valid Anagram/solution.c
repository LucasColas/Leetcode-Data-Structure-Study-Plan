

bool isAnagram(char * s, char * t){
    
    int hash[26] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        hash[s[i]-'a']++;
    }
    
    for (int i = 0; t[i] != '\0';i++) {
        if (hash[t[i]-'a'] == 0) {
            return false;
        }
        
        hash[t[i]-'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0) {
            return false;
        }
    }
    
    return true;

}
