function arrayChunk(arr, size) {
    let chunked = [];
    // for (let element of arr) {
    //     const last = chunked[chunked.length - 1]
    //     if (!last || last.length === size) {
            
    //         chunked.push([element])
    //     } else {
    //         last.push(element)
    //     }
    // }
    
    let index =0;
    while(index < arr.length){
        chunked.push(arr.slice(index,index+size))
        index+=size;
    }

    return chunked;
}

let arr = [1, 2, 3, 4, 5]
console.log(arrayChunk(arr, 2))


// let temp = []


// for (let i of arr) {
//     temp.push(i)  
//     if(temp.length == size){            
//         chunked.push(temp)
//         temp = []         
//     }
// }

