const ids = new Set([1,2,3,4,3,2,1,2,3,4,3])
ids.add('abc')
ids.add(1)
ids.delete('abc')
console.log(ids.has(2));
console.log(ids.size);
console.log(ids);