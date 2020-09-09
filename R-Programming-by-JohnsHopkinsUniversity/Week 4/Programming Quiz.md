# Week 2 Assignment Quiz
## The functions that will be needed to complete this quiz are in the folder Programming Assignment

### Question 1
What result is returned by the following code?
```
best("SC", "heart attack")
```
### Answer
MUSC MEDICAL CENTER

### Question 2
What result is returned by the following code?
```
best("NY", "pneumonia")
```
### Answer
MAIMONIDES MEDICAL CENTER

### Question 3
What result is returned by the following code?
```
best("AK", "pneumonia")
```
### Answer
YUKON KUSKOKWIM DELTA REG HOSPITAL

### Question 4
What result is returned by the following code?
```
rankhospital("NC", "heart attack", "worst")
```
### Answer
WAYNE MEMORIAL HOSPITAL

### Question 5
What result is returned by the following code?
```
rankhospital("WA", "heart attack", 7)
```
### Answer
YAKIMA VALLEY MEMORIAL HOSPITAL

### Question 6
What result is returned by the following code?
```
rankhospital("TX", "pneumonia", 10)
```
### Answer
SETON SMITHVILLE REGIONAL HOSPITAL

### Question 7
What result is returned by the following code?
```
rankhospital("NY", "heart attack", 7)
```
### Answer
BELLEVUE HOSPITAL CENTER

### Question 8
What result is returned by the following code?
```
r <- rankall("heart attack", 4)
as.character(subset(r, state == "HI")$hospital)
```
### Answer
CASTLE MEDICAL CENTER

### Question 9
What result is returned by the following code?
```
r <- rankall("pneumonia", "worst")
as.character(subset(r, state == "NJ")$hospital)
```
### Answer
BERGEN REGIONAL MEDICAL CENTER

### Question 10
What result is returned by the following code?
```
r <- rankall("heart failure", 10)
as.character(subset(r, state == "NV")$hospital)
```
### Answer
RENOWN SOUTH MEADOWS MEDICAL CENTER