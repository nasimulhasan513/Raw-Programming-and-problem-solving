function palindrome(str){
    // return str.split('').reverse().join('') === str;
    return str.split('').every((char,i)=>{
        return char === str[str.length-i-1]
        // console.log(char);
    })
    // return str[str.length-1]
}


console.log(palindrome("avvaa"));