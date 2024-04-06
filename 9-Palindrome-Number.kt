class Solution {
    fun isPalindrome(x: Int): Boolean {
       var result:Boolean=false
    var rev_num:String
      if (x.toString().length==1){
        result=true
    }
    if(x>=0&&x<(Int.MAX_VALUE)){
        rev_num =x.toString().reversed()
        var i=0
        var j=rev_num.length-1
        while (i<j){
            if (rev_num[i]==rev_num[j]){
                result=true
            }
            else{
                result=false
                  break;
            }
                i++
                j--
        }
        }
    else{
        result=false
    }

    return result
}
    }