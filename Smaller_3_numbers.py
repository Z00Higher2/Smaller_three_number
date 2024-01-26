#This program prints out the smalles of the three numbers from the user input

number_1 = int(input('Enter the First Number: '))
number_2 = int(input('Enter the Second Number: '))
number_3 = int(input('Enter the Third Number: '))

print('The smallest of the three numbers is', min(min(number_1, number_2), number_3))