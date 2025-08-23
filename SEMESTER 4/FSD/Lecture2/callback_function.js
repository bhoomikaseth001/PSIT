var cal=function(fx,a,b){
    return fx(a,b);
}

var sum=function(x,y){
    return x+y;
}

var diff=function(x,y){
    return x-y;
}

var prod=function(x,y){
    return x*y;
}

console.log(cal(sum,4,5));
console.log(cal(diff,4,5));
console.log(cal(diff,4,5));