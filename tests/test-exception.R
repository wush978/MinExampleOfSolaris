tryCatch({
  MinExampleOfSolaris::test()
}, error = function(e) {
  stopifnot(conditionMessage(e) == "test")
})
