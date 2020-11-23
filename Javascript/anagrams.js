function anagrams(stringA,stringB) {
    const aCharMap = buildCharMap(stringA)
    const bCharmap = buildCharMap(stringB)
    if(Object.keys(aCharMap).length!==Object.keys(bCharmap).length){
        return false
    }
    for(let char in aCharMap){
        if (aCharMap[char]!==bCharmap[char]) {
            return false
        }
    }
    return true
    
 }
 function buildCharMap(str){
     const charMap = {};
     for (const char of str.replace(/[^\w]/g,'').toLowerCase()) {
         charMap[char] = charMap[char]+1 || 1
     }

     return charMap
 }
 console.log(anagrams("Apple","Aple"))
 
 //another solution
 function anagrams(stringA,stringB) {
    return util(stringA)===util(stringB)
}

function util(str){
    return str.replace(/[^\w]/g,"").toLowerCase().split('').join('')
}

console.log(anagrams("Apple","App  le"))