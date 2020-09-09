# Week 2 Assignment Quiz
## The functions that will be needed to complete this quiz are in the folder Programming Assignment

### Question 1
What value is returned by the following call to pollutantmean()? You should round your output to 3 digits.
```
pollutantmean("specdata", "sulfate", 1:10)
```
### Answer
4.064

### Question 2
What value is returned by the following call to pollutantmean()? You should round your output to 3 digits.
```
pollutantmean("specdata", "nitrate", 70:72)
```
### Answer
1.706

### Question 3
What value is returned by the following call to pollutantmean()? You should round your output to 3 digits.
```
pollutantmean("specdata", "sulfate", 34)
```
### Answer
1.477

### Question 4
What value is returned by the following call to pollutantmean()? You should round your output to 3 digits.
```
pollutantmean("specdata", "nitrate")
```
### Answer
1.703

## Question 5
What value is printed at end of the following code?
```
cc <- complete("specdata", c(6, 10, 20, 34, 100, 200, 310))
print(cc$nobs)
```
### Answer
228 148 124 165 104 460 232

### Question 6
What value is printed at end of the following code?
```
cc <- complete("specdata", 54)
print(cc$nobs)
```
### Answer
219

### Question 7
What value is printed at end of the following code?
```
RNGversion("3.5.1")  
set.seed(42)
cc <- complete("specdata", 332:1)
use <- sample(332, 10)
print(cc[use, "nobs"])
```
### Answer
711 135 74 445 178 73 49 0 687 237

### Question 8
What value is printed at end of the following code?
```
cr <- corr("specdata")                
cr <- sort(cr)   
RNGversion("3.5.1")
set.seed(868)                
out <- round(cr[sample(length(cr), 5)], 4)
print(out)
```
### Answer
0.2688 0.1127 -0.0085 0.4586 0.0447

### Question 9
What value is printed at end of the following code?
```
cr <- corr("specdata", 129)                
cr <- sort(cr)                
n <- length(cr)    
RNGversion("3.5.1")
set.seed(197)                
out <- c(n, round(cr[sample(n, 5)], 4))
print(out)
```
### Answer
243.0000 0.2540 0.0504 -0.1462 -0.1680 0.5969

### Question 10
Question 10
What value is printed at end of the following code?
```
cr <- corr("specdata", 2000)                
n <- length(cr)                
cr <- corr("specdata", 1000)                
cr <- sort(cr)
print(c(n, round(cr, 4)))
```
### Answer
0.0000 -0.0190 0.0419 0.1901