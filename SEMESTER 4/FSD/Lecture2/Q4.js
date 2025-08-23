let num=123;
let str="123";
console.log("Before conversion : "+num, typeof num); 
console.log("Before conversion : "+str, typeof str);       

num=String(num);
str=Number(str);

console.log("After conversion : "+num, typeof num); 
console.log("After conversion : "+str, typeof str);       

