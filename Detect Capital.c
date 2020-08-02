bool detectCapitalUse(char * word){
    int i,caps=0,small=0;
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]>=65 && word[i]<=90)
            caps++;
        else if(word[i]>=97 && word[i]<=122)
            small++;
    }
    if((caps==strlen(word)) || (caps==1 && (word[0]>=65 && word[0]<=90)))
        return 1;
    else if(caps==0 && small==strlen(word))
        return 1;
    else
        return 0;
    

}
