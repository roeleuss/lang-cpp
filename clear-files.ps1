get-childitem -recurse . *.bin | remove-item
get-childitem -recurse . *.exe | remove-item
get-childitem -recurse . *.o? | remove-item
get-childitem -recurse . *.s? | remove-item