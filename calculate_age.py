"""
  Author: Paula Macedo
  Calculate_age.py is a file that uses datetime module. It has two functions, one to check whether a date is valid and another to calculate the age of a person.
"""

import datetime


def check_valid_date(day, month, year):
   if year <= datetime.datetime.now().year:
       if  month >= 1 and month <= 12:
           if day>=1:
               if month%2 == 1 and day <= 31:
                   return True
               elif month%2 == 0:
                   if month != 2 and day <= 30:
                       return True
                   elif month == 2 and year%4 == 0 and day <= 29:
                       return True
                   elif month == 2 and year%4 != 0 and day <= 28:
                       return True
                   else: 
                       return False
               else:
                   return False
           else:
               return False
       else:
           return False
   else:
       return False
       
        
        
        
def calcule_age(day, month, year):

    if  month > datetime.datetime.now().month : 
        age = ( datetime.datetime.now().year - year ) - 1
        print(str(age) + " " + "years old")
    elif datetime.datetime.now().day < day and month == datetime.datetime.now().month:
        age = ( datetime.datetime.now().year - year ) - 1
        print(str(age) + " " + "years old")
    elif datetime.datetime.now().year == year :
        age = datetime.datetime.now().month - month
        print(str(age) + " " + "months old")
    else:
        age = datetime.datetime.now().year - year
        print(str(age) + " " + "years old")
