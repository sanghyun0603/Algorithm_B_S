const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let lines = [];

rl.on("line", (line) => {
  if (line == 0) {
    rl.close();
  }
  lines.push(line);
}).on("close", () => {
  let n = lines[0];
  for (let i = 1; i <= n; i++) {
    let arr = lines[i].split(" ");
    for (let j = 0; j < arr.length; j++) {
      arr[j] = arr[j].split("").reverse().join("");
    }
    arr = arr.join(" ");
    console.log(arr);
  }
  process.exit();
});
