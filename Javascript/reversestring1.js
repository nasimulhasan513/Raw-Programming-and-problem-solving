function reverse(str){
    // const arr = str.split('')
    // arr.reverse()
    // return arr.join('')
    // return str.split('').reverse().join('');
    

    // let reversed = '';
    // for (let i = 0;i<str.length;i++){
    //     reversed = str[i] + reversed
    // }
    // return reversed

    return str.split('').reduce((reversed,character)=>character + reversed
    ,'')
}

console.log(
    reverse("apple")) 