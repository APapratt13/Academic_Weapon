bool capitalizeName(char *name){
    int lenght = strlen(name);

    if (lenght == 0) {
        return false;  // Prazan niz, vraća false
    }

        for (int i=1; i<lenght; i++){

            if ((islower(*(name+i)) && *(name+i-1) == ' ')
                || (islower(*(name+i)) && *(name+i-1) == '-')){
                    *(name+i) = toupper(*(name+i));
            }

            else if(i==1 && (islower(*(name+i-1)))){
                    *(name+i-1) = toupper(*(name+i-1));
            }

            else if ((isupper(*(name+i)) && *(name+i-1) != ' '
                && *(name+i-1) != '-')){
                    *(name+i) = tolower(*(name+i));
            }
        }
    return true;
}
