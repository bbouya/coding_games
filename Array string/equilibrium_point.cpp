class solution{


    public:
    int equilibriumPoint(long long arr[], int n){
        int sum = 0;
        int leftsum = 0;

        /* Find sim the whole array*/
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        for(int i=0; i < n; ++i){
            sum -= arr[i];

            if(leftsum == sum){
                return i+1;
            }
            leftsum += arr[i];
        }

    return -1;
        
    }
};