function solution(numbers) {
    var answer = 0;
    let sums = 0;
    for(let i = 0; i < numbers.length; i++) {
        sums += numbers[i];
    }
    answer = sums/numbers.length
    return answer;
}