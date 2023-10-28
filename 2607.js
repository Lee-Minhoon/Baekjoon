const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

let count = null;
const input = [];

readline
  .on("line", function (line) {
    if (!count) {
      count = parseInt(line);
      return;
    }
    input.push(line);
  })
  .on("close", function () {
    const origin = input[0];
    const hash = stringToHash(origin);

    for (let i = 1; i < input.length; i++) {
      const target = input[i];
      const copiedHash = [...hash];

      for (let j = 0; j < target.length; j++) {
        copiedHash[target[j].charCodeAt() - 65]--;
      }

      if (copiedHash.some((el) => Math.abs(el) > 1)) {
        count--;
        continue;
      }

      if (copiedHash.reduce((acc, cur) => acc + (cur !== 0), 0) > 2) {
        count--;
        continue;
      }

      if (Math.abs(copiedHash.reduce((acc, cur) => acc + cur, 0)) > 1) {
        count--;
        continue;
      }
    }

    console.log(count - 1);

    process.exit();
  });

const stringToHash = (str) => {
  const hash = Array.from({ length: 26 }, () => 0);
  for (let i = 0; i < str.length; i++) {
    hash[str[i].charCodeAt() - 65]++;
  }
  return hash;
};
