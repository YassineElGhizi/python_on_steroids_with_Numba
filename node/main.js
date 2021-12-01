let startTime = performance.now()
for (i=1; i < 100000000; i++)
{
    Math.sqrt(i)
}
let endTime = performance.now()

console.log(`finished in ${((endTime - startTime)/1000)} seconds`)
