

bool isValid(char * s){
    
    char stack[10000];
    int count = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
                case '(':
                        stack[count] = ')';
                        count++;
                        break;
                case '[':
                        stack[count] = ']';
                        count++;
                        break;
                case '{':
                        stack[count] = '}';
                        count++;
                        break;
                
                default:
                        if (count > 0) {
                            if (s[i] != stack[count-1]) {
                                return false;
                            }
                
                            else {
                                count--;
                            }
                            
                        }
                
                        else {
                            return false;
                        }
                        break;
        } 
    }
    
    if (count == 0) {
        return true;
    }
    else {
        return false;
    }

}
