

int pageCount(int n, int p) {
    int leftTurn = 0 , rightTurn = 0;
    if(p == 1 || p == n){
        return 0;
    }else{
        for(int i = 2;i <n;i+=2 ){
            leftTurn++;
            if(i == p || i+1 == p){
                break;
            }
            
        }
        if(n%2 == 0){
           for(int i = n-1;i >1;i-=2 ){
                rightTurn++;
                if(i == p || i-1 == p){
                    break;
                }
            
            }  
        }else{
             for(int i = n;i >1;i-=2 ){
                
                if(i == p || i-1 == p){
                    break;
                }else{
                    rightTurn++;
                }
            
            }  
        }
        if(leftTurn < rightTurn){
            return leftTurn;
        }else{
            return rightTurn;
        }    
    }
}
