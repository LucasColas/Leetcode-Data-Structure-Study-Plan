

int firstUniqChar(char * s){
    /*
    if (s == 1) {
        return 0;
    }
    */
    
    int hash[26] = {0};
    
    for (int i = 0; s[i] != '\0' ; i++) { // '\0' stands for null terminator, abbreviated NUL, is a control character. Tt serves as a reserved character used to signify the end of a string
        hash[s[i]-'a']++;
    }
    
    for (int i = 0 ; s[i] != '\0';i++) {
        if (hash[s[i]-'a'] == 1) {
            return i;
        }
    }
    
    return -1;

}
