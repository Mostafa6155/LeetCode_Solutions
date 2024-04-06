class Solution {
    fun romanToInt(s: String): Int {
    var a1:Int =0
    var a2:Int=0
    var a3:Int=0
    var a4:Int=0
    var a5:Int=0
    var a6:Int=0
    var a7:Int=0
    var b1:Int=0
    var b2:Int=0
    var b3:Int=0
    var b4:Int=0
    var b5:Int=0
    var b6:Int=0
    var sum:Int=0
var d:String=s
    var f= CharArray(0)
    d.toCharArray()
   for (i in d){
       if (i=='I')
            a1=a1+1
       else if (i=='V')
           a2+=5
       else if (i=='X')
           a3+=10
       else if (i=='L')
           a4+=50
       else if (i=='C')
           a5+=100
       else if (i=='D')
           a6+=500
       else if (i=='M')
           a7+=1000

   }

    sum=a1+a2+a3+a4+a5+a6+a7
    
    var i:Int=0
    while (i<d.length-1){
        if (d[i].toString()+d[i+1]==\IV\){
            b1=4
            sum=sum-6+b1
        }
        else if (d[i].toString()+d[i+1]==\IX\){
            b2=9
            sum=sum-11+b2
        }
        else if (d[i].toString()+d[i+1]==\XL\){
            b3=40
           sum=sum-60+b3
        }
        else if (d[i].toString()+d[i+1]==\XC\){
            b4=90
           sum=sum-110+b4
        }
        else if (d[i].toString()+d[i+1]==\CD\){
            b5=400
            sum=sum-600+b5
        }
        else if (d[i].toString()+d[i+1]==\CM\){
            b6=900
            sum=sum-1100+b6

        }
        i++
    }
    return (sum)





  
    }
}