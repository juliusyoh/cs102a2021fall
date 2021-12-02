def does_list_contain_number( lookforthis, inthisarray ):
    for x in inthisarray:
        if x == lookforthis:
            return True
    return False
print( does_list_contain_number( 0, [1, 2, 3, 0, 4] ) )
print( does_list_contain_number( 5, [1, 2, 3, 0, 4] ) )
