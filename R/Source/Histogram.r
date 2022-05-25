Histogram.hist <- function(s) {
  count <- NULL
  for (letter in letters[1:26]) {
    count[letter] <- 0
  }
  for (letter in strsplit(s, "")[[1]]) {
    count[letter] <- count[letter] + 1
  }
  res <- ""
  for (letter in c("u", "w", "x", "z")) {
    if (count[letter] > 0) {
      str <- sprintf("%s  %-6d", letter, count[letter])
      stars <- paste(replicate(count[letter], "*"), collapse = "")
      res <- paste0(res, str, stars, "\n")
    }
  }
  return(substr(res, 0, nchar(res) - 1))
}
