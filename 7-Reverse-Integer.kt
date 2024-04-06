class Solution {
  fun reverse(x: Int): Int {
    var result:Int=0
    var rev_num=0

    if(x>0&&x<(Int.MAX_VALUE)&&x.toString().reversed().toDouble()<Int.MAX_VALUE){
        rev_num =x.toString().reversed().toInt()
            result=rev_num
        }
    else if(x<0&&x>Int.MIN_VALUE&&(-(x.toString().substring(1,x.toString().length).reversed().toDouble()))>Int.MIN_VALUE){
        rev_num=-(x.toString().substring(1,x.toString().length).reversed().toInt())
            result=rev_num
        }
    else if (x==0){
        result=0
    }
    else{
        result=0
    }

    return result
}
}