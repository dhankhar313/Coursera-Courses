# This function creates a special object of type matrix that can cache its inverse
makeCacheMatrix <- function(x = numeric()) {
  inv <- NULL
  get <- function() x
  getInverse <- function() {
    if(length(x)%%sqrt(length(x))==0) {
      # making sure that matrix is n x n
      inv <<- solve(x)
    }
  }
  list(get = get, getInverse = getInverse)
}

if (FALSE){
  'This function takes the matrix object created by the function written above 
  and calculates its inverse. If the matrix and its inverse are equal then this
  function retrieves the inverse stored in the cache!!'
}

cacheSolve <- function(x, ...) {
  if(!is.atomic(x)){
    # checks if the given parameter is atomic
    inv <- x$getInverse()
    if(!is.null(inv)) {
      message('getting cached data')
      return(inv)
    }     
  } else {       
    # Converts it to atomic if it's not already
    message('getting the inverse-- no cached data found')
    return(makeCacheMatrix(x)$getInverse())
  } 
  
}

# non-atomic example
f <- makeCacheMatrix(matrix(1:4, 2, 2))
print(cacheSolve(f))

# atomic examples
print(cacheSolve(matrix(1:4, 2, 2)))