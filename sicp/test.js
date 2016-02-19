function pow(arg1, arg2) {
    console.log(arg1 *= arg1, arg2 *= arg2);
}
function comp(x, y, z) {
    if(x > y && x > z) {
        if(y > z) {
            pow(x, y);
        } else {
            pow(x, z);
        }
    }
    if(y > x && y > z) {
        if(x > z) {
            pow(y, x);
        } else {
            pow(y, z);
        }
    }
    if(z > y && z > x) {
        if(y > x) {
            pow(z, y);
        } else {
            pow(z, x);
        }
    }
}

function test(callb) {
    return callb(), callb();
};
test(function() {
    console.log('some');
})
// console.log(test(12)());
// comp(3, 2, 5);
