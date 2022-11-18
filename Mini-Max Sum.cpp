void miniMaxSum(vector<int> arr) {
    long long sum[arr.size()];
    for(int i=0;i< arr.size();i++){
        long long  temp = 0;
        for(int j = 0;j < arr.size(); j++){
            if(i != j){
                temp += arr[j];
            }
        }
    
        sum[i] = temp;
    }
    sort(sum , sum+arr.size());
    cout << sum[0] << " "<< sum[arr.size()-1];
}
