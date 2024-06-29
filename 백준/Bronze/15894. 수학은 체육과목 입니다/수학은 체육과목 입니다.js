const readline = require("readline");

const rl = readline.createInterface({
        input : process.stdin,
        output : process.stdout
});

let lines = [];

rl.on("line", (line) => {
    lines.push(line);
}).on("close", () => {
    let n = lines[0];
    console.log(n * 4);
    process.exit();
})