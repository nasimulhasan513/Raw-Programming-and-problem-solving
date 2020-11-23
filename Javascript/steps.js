function step(n){
    for(let i=1;i<=n;i++){
        let stair = ''
        for(let j = 1;j<=n;j++){
            if(j<i){
                stair+='#'
            }else{
                stair+=" "
            }
        }
        console.log(stair)
    }
}


step(10)