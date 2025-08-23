//using object initializer

var person={
    name: "John",
    age: 30,
    city: "New York"
}
console.log(person); 
console.log(person.name);


var cup={
    color: "red",
    size: "medium",
    material: "ceramic"
}


console.log(cup);
console.log(cup.color);

// Modifying properties
person.name="Jenny";
person.age=25;
cup.color="blue";

console.log(person);
console.log(cup);

//using object constructor
var student={}

student["name"]="Alice";
student["age"]=22;

console.log(student);



let x=5;
let y=10;
if(x<y){
    obj={greeting: "Hello, World!"};
}

console.log(obj); 


//Object of objects
const myHonda={
    color: "black",
    wheels: 4,
    engine:{cylinders: 4, size:2.2},
};

console.log(myHonda);
console.log(myHonda.engine);
console.log(myHonda.engine.cylinders);



//using constructor function
 function Car(make, model, year) {
    this.make = make;
    this.model = model;
    this.year = year;
}

const myCar = new Car("Toyota", "Corolla", 2020);
const nCar = new Car("Honda", "Civic", 2021);
const mCar = new Car("Ford", "Focus", 2019);

console.log(myCar);
console.log(nCar);
console.log(mCar);


