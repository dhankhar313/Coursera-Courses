complete <- function(directory, id = 1:332) {
  
  filenames <- list.files(path=directory, pattern="*.csv")

  ids <-vector()
  counts = vector()

  for(i in id) {

    filename <- sprintf("%03d.csv", i)
    filepath <- paste(directory, filename, sep="/")
    
    data <- read.csv(filepath)

    ids <- c(ids, i)

    completeCases <- data[complete.cases(data),]
    counts <- c(counts, nrow(completeCases))
  }
  

  data.frame(id=ids, nobs=counts)
}
