## The Constructor Pattern
### Object Creation
In classical object-oriented programming languages, a constructor is a special method used to initialize a newly created object once memory has been allocated for it. In JavaScript, as almost everything is an object, we're most often interested in object constructors.

Object constructors are used to create specific types of objects - both preparing the object for use and accepting arguments which a constructor can use to set the values of member properties and methods when the object is first created

``` js
    var newObj = {};
    var newObj = Object.create(Object.prototype);
    var newObj = new Object();
```
There are then four ways in which keys and values can then be assigned to an object:
``` js
    //1
    newObj.someKey = "hello";
    // 2
    newObj["someKey"] = "hello";
    // ES5
    // 3
    Object.defineProperty(newObj, "someKey", {
        value: "for more control for property's behavior",
        writable: true,
        enumerable: true,
        configurable: true

    });
    // short-hand for method below
    var defineProp = function(obj, key, value) {
        var config = {
            value: value,
            writable: true,
            enumerable: true,
            configurable: true
        };
        Object.defineProperty(obj, key, config);
    };
    // To use, we then create a new empty "person" object
    var person = Object.create( Object.prototype );

    // Populate the object with properties
    defineProp( person, "car", "Delorean" );
    defineProp( person, "dateOfBirth", "1981" );
    defineProp( person, "hasBeard", false );

    // 4
    Object.defineProperties(newObj, {
        "some key": {
            value: "hello",
            writable: true
        },
        "another key": {
            value: "foo",
            writable: false
        }
    });

    newObj = new Object();
```

### Basic Constructors
``` js
    function Car(mode, year, miles) {
        this.model = model;
        this.year = year;
        this.miles = miles;
        this.toStirng = function() {
            return this.model + "hos done " + this.miles + "miles";
        };
    }
```
The above is a simple version of the constructor pattern but it does suffer from some problems. One is that it makes inheritance difficult and the other is that functions such as toString() are redefined for each of the new objects created using the Car constructor. This isn't very optimal as the function should ideally be shared between all of the instances of the Car type.

Thankfully as there are a number of both ES3 and ES5-compatible alternatives to constructing objects, it's trivial to work around this limitation.

### Constructors with prototypes
Same but with prototypes.

## The Module Pattern

### Modules
In JavaScript, there are several options for implementing modules:

+ The Module pattern
+ Object literal notation
+ AMD modules
+ CommonJS modules
+ ECMAScript Harmony modules

#### Object Literal
