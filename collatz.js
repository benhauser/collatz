let maxStepsSoFar = 0;

function collatz(n) {
    let x = n;
    let steps = 0;
    for (;;) {
        // console.log(x);
        if (x === 1) {
            break;
        }
        x = (x % 2 === 0) ? x / 2 : (x * 3) + 1;
        steps++;
    }
    if (steps > maxStepsSoFar) {
        maxStepsSoFar = steps;
        console.log(`${n} had ${steps} steps.`);
    }
}

let i = 1;
for (;;) {
    // for (let i=1;i<1000000;i++) {
    collatz(i++);
}

// collatz(27);
