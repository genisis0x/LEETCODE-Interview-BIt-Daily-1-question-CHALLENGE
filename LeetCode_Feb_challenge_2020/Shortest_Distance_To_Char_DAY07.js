/**
 * @param {string} s
 * @param {character} c
 * @return {number[]}
 */
var shortestToChar = function(s, c) {
  const charIndex = [];
  let ans = [];
  for(let i=0; i<(s.length); ++i) {
      if(s[i] === c) {
          charIndex.push(i);
      }
  }
  console.log(charIndex);
  for(let i=0; i<(s.length); ++i) {
      let val = Infinity;
      if(s[i] !== c) {
          charIndex.forEach((el)=> {
              val = Math.min(val, Math.abs(el-i));
          });
      }
      else val = 0;
      ans.push(val);
  }
  return ans;
};