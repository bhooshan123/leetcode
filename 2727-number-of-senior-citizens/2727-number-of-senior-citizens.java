class Solution {
    public int countSeniors(String[] details) {
         int n=details.length;
         int res=0;
        for(int i=0;i<n;i++){
            int age=Integer.parseInt(details[i].substring(11,13));
            if(age>60){
                res++;
            }
        }
        return res;
    }

}