const readline = require("readline");

const rl = readline.createInterface({
    input : process.stdin,
    output : process.stdout
});
let lines = [];
rl.on("line", (line)=> {
    lines.push(line);
}).on("close", ()=> {
    let num = lines[0];
    console.log(num * num);
    console.log(2);
    process.exit();
})