get-childitem -recurse ./part* *.bin | remove-item
get-childitem -recurse ./part* *.exe | remove-item
get-childitem -recurse ./part* *.o? | remove-item
get-childitem -recurse ./part* *.s? | remove-item