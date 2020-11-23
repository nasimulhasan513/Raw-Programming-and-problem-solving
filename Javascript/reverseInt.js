function reverse(n){
    // var number =  n.toString()
    // if(n >= 0){
    //  var reversed = number.split("").reverse().join('');
    //  return parseInt(reversed)
    // }else{
    //     var reversed = '-'+number.substring(1,number.length).split("").reverse().join('');
    //     return parseInt(reversed)
    // }
    return parseInt(n.toString().split('').reverse().join(''))*Math.sign(n)
    
}

console.log(reverse(-90040))