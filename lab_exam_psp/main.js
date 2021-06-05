function connellSequence(start, end, n) {
    let seq = [];
    if (start === 1) {
      seq.push(1);
      start++;
    }
    for (let i = 0; i < end; i++) {
      let value = start * start - (start - 1) * 2;
      for (let j = 0; j < start; j++, value += 2) {
        seq.push(value);
        console.log(value);
      }
      start++;
    }
  
    return seq.indexOf(n) == -1 ? "Not Found" : seq.indexOf(n);
  }

  connellSequence(1, 3, 10);