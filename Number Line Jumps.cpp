string kangaroo(int x1, int v1, int x2, int v2) {
    if(x2 > x1 && v2 > v1 ){
        return "NO";
    }else{
        int afterFourJumpk1 = x1, afterFourJumpk2 = x2;
        while (afterFourJumpk1 != afterFourJumpk2 && afterFourJumpk2 > afterFourJumpk1) {
            afterFourJumpk1 += v1;
            afterFourJumpk2 += v2;
        }
       
        if(afterFourJumpk1 == afterFourJumpk2 ){
            return "YES";
        }else{
            return "NO";
        }
        
    }
}
