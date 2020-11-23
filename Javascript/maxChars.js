function maxChars(str){
    let chars = {}
    let max = 0
    let maxChar = ''
    for(let char of str){
        // if(!chars[char]){
        //     chars[char] = 1
        // }else{
        //     chars[char]++
        // }
        chars[char] = chars[char]+1 || 1
    }
    for(let char in chars){
        if (chars[char]>max) {
            max = chars[char]
            maxChar = char
        }
    }
    return `${maxChar} is used ${max} times and it is highest`
}

console.log(maxChars("abcccdsfsdf"))