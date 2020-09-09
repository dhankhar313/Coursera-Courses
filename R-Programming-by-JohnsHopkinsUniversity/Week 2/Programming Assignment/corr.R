corr <- function(directory, threshold = 0) {
  
  completes <- complete(directory, 1:332)
  completes <- subset(completes, nobs > threshold )

  correlations <- vector()

  for(i in completes$id ) {

    filename <- sprintf("%03d.csv", i)
    filepath <- paste(directory, filename, sep="/")

    data <- read.csv(filepath)

    completeCases <- data[complete.cases(data),]
    count <- nrow(completeCases)

    if( count >= threshold ) {
      correlations <- c(correlations, cor(completeCases$nitrate, completeCases$sulfate) )
    }
  }
  
  correlations
}
