#--------------------------------------------------------------------------------------------------------------#
#----------------------|      Data       |---|      Aula      |---|      Professor      |----------------------#
#----------------------|    03/04/23     |---|       01       |---|   Leonardo Coelho   |----------------------#
#--------------------------------------------------------------------------------------------------------------#
# OBJ: Programa que defini se um numero informado é par ou impar                                               #
#--------------------------------------------------------------------------------------------------------------#

# Solicita ao usuário um numero inteiro 
numero = int(input("Digite um número inteiro: "))

#Verifica se o número é par ou impar 
if numero % 2 == 0:
    print(numero , "é par!")
else:
    print (numero, "é impar!")