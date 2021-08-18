string getString(int d){
    
    if(d == 2){
        return "abc";
    }
    if(d == 3){
        return "def";
    }
    if(d == 4){
        return "ghi";
    }
    if(d == 5){
        return "jkl";
    }
    if(d == 6){
        return "mno";
    }
    if(d == 7){
        return "pqrs";
    }
    if(d == 8){
        return "tuv";
    }
    if(d == 9){
        return "wxyz";
    }
    
    return " ";
}

void printKeypadUtil(int num , string output){
 	
    if(num == 0){
        cout<<output<<endl;
        return;
    }
    
    int lastdigit = num%10;
    int smallnumber = num/10;
    
    string options = getString(lastdigit);
    
    for(int i =0;i<options.size();i++){
        printKeypadUtil(smallnumber , options[i] + output);
    }
    
    
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    printKeypadUtil(num , "");
}
