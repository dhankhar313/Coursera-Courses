# Week 1 Quiz
## Questions with same question number are the ones that vary from one quiz to another!!
### Question 1
The R language is a dialect of which of the following programming languages?
### Answer
S

### Question 1
R was developed by statisticians working at
### Answer
The University of Auckland

### Question 2
The definition of free software consists of four freedoms (freedoms 0 through 3). Which of the following is NOT one of the freedoms that are part of the definition? Select all that apply.
### Answer

    The freedom to sell the software for any price.

    The freedom to restrict access to the source code for the software.

    The freedom to prevent users from using the software for undesirable purposes.

### Question 3
In R the following are all atomic data types EXCEPT: (Select all that apply)
### Answer
`data frame, list, matrix, array, table`

### Question 4
If I execute the expression `x <- 4` in R, what is the class of the object x' as determined by the class()' function?
### Answer
numeric

### Question 5
What is the class of the object defined by `x <- c(4, TRUE)`?
### Answer
character

### Question 6
If I have two vectors `x <- c(1,3, 5)` and `y <- c(3, 2, 10)`, what is produced by the expression `rbind(x, y)`?
### Answer
a matrix with two rows and three columns

### Question 7
A key property of vectors in R is that
### Answer
elements of a vector all must be of the same class

### Question 8
Suppose I have a list defined as `x <- list(2, "a", "b", TRUE)`. What does `x[[2]]` give me? Select all that apply.
### Answer

    a character vector containing the letter "a".
    a character vector of length 1


### Question 9
Suppose I have a vector `x <- 1:4`and `y <- 2:3`. What is produced by the expression `x + y`?
### Answer
an integer vector with the values 3, 5, 5, 7.

### Question 9
Suppose I have a vector `x <- 1:4`and a vector `y <- 2`. What is produced by the expression `x + y`?
### Answer
a numeric vector with elements 3, 4, 5, 6.

### Question 10
Suppose I have a vector `x <- c(17, 14, 4, 5, 13, 12, 10)` and I want to set all elements of this vector that are greater than 10 to be equal to 4. What R code achieves this? Select all that apply.
### Answer

    x[x > 10] <- 4
    x[x >= 11] <- 4

### Question 11
Use the Week 1 Quiz Data Set to answer questions 11-20.
In the dataset provided for this Quiz, what are the column names of the dataset?
### Answer
 `names(hw1_data)`

  `Ozone, Solar.R, Wind, Temp, Month, Day`

### Question 12
Extract the first 2 rows of the data frame and print them to the console. What does the output look like?
### Answer
`hw1_data[c(1:2),]`
```
Ozone Solar.R Wind Temp Month Day
1    41     190  7.4   67     5   1
2    36     118  8.0   72     5   2
```

### Question 13
How many observations (i.e. rows) are in this data frame?
### Answer
`nrow(hw1_data)` i.e. 153

### Question 14
Extract the last 2 rows of the data frame and print them to the console. What does the output look like?
### Answer
`hw1_data[c(nrow(hw1_data)-1, nrow(hw1_data)),]`
```
Ozone Solar.R Wind Temp Month Day
152    18     131  8.0   76     9  29
153    20     223 11.5   68     9  30
```

### Question 15
What is the value of Ozone in the 47th row?
### Answer
`hw1_data[47, c('Ozone')]` i.e.21

### Question 16
How many missing values are in the Ozone column of this data frame?
### Answer
`table(factor(is.na(c(hw1_data$Ozone))))[2]` i.e.37

### Question 17
What is the mean of the Ozone column in this dataset? Exclude missing values (coded as NA) from this calculation.
### Answer
`mean(hw1_data$Ozone[!is.na(hw1_data$Ozone)])` i.e. 42.12931

### Question 18
Extract the subset of rows of the data frame where Ozone values are above 31 and Temp values are above 90. What is the mean of Solar.R in this subset?
### Answer
`temp <- complete.cases(hw1_data$Ozone, hw1_data$Solar.R, hw1_data$Temp)
      mean(hw1_data$Solar.R[temp & hw1_data$Ozone > 31 & hw1_data$Temp > 90])`
      i.e. 212.8

### Question 19
What is the mean of "Temp" when "Month" is equal to 6?
### Answer
`temp <- complete.cases(hw1_data$Month, hw1_data$Temp)
      mean(hw1_data$Temp[temp & hw1_data$Month == 6])`
      i.e. 79.1

### Question 20
What was the maximum ozone value in the month of May (i.e. Month is equal to 5)?
### Answer
`max(hw1_data$Ozone[hw1_data$Month==5 & !is.na(hw1_data$Ozone)])` i.e. 115
