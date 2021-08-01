get-childitem -recurse ./src *.bin | remove-item
get-childitem -recurse ./src *.exe | remove-item
get-childitem -recurse ./src *.o? | remove-item
get-childitem -recurse ./src *.s? | remove-item