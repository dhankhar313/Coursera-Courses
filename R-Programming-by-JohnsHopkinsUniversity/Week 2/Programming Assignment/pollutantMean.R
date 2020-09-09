pollutantmean <- function(directory, pollutant, id = 1:332) {
  
  filenames <- list.files(path=directory, pattern="*.csv")
  
  vals <- vector()

  for(i in id) {
    
    filename <- sprintf("%03d.csv", i)
    filepath <- paste(directory, filename, sep="/")
    
    data <- read.csv(filepath)

    d <- data[,pollutant]
    
    d <- d[!is.na(d)]

    vals <- c(vals, d)
  }

  round(mean(vals), 3)
}
