bool isPalindrome(int x){
    if( x<0 || (x%10==0 && x!=0)) return false;

    int half_rev = 0;
    
    while(x > half_rev){
        half_rev = half_rev*10 + x%10;
        x = x/10; 
    }
    if(x == half_rev || x == half_rev/10){
        return true;
    }

    return false;
}