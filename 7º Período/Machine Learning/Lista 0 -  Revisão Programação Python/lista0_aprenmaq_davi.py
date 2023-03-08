# -*- coding: utf-8 -*-
"""Lista0-AprenMaq-Davi.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1PKebV4DRUPKzOU7UaI-o4Yxy1StHRXQu
"""

numero = int(input('Digite um número inteiro: ')) #resto da divisão por 2, o resultado é sempre 0 ou 1.
if numero%2 : #se o resultado da operação for 1, cai no IF que diz que é ímpar,se for 0 vai pro ELSE que diz que é par.
    print("Número Ímpar")
else: 
    print("Número Par")

# Pedindo as entradas
num1 = float( input("Digite o primeiro número: ") )
num2 = float( input("Digite o segundo número: ") )
num3 = float( input("Digite o terceiro número: ") )

# Cálculo da média
media = (num1 + num2 + num3) / 3

print("A média desses números é: ", media)

#Vetor como entrada e print o primeiro e ultimo elemento
times = ["CAM", "Galo", "Atlético"]
print(times[0], ',', times[2])

#Crie uma lista vazia
lista_vazia = []
#Adicione 5 elementos de uma lista de compras de supermercado
lista_inicial = ["ovo", "pão", "carne", "danoninho", "desodorante"]
#Remova o último elemento
lista_inicial.pop()
#Adicione mais 3 elementos
mais_itens = ["batata", "xuxu", "cenoura"]
nova_lista = lista_inicial + mais_itens
#Print apenas os dois primeiros elementos
print("Apenas os dois primeiros elementos: ", nova_lista[:2])
#Print apenas os 3 últimos elementos;
print("Apenas os três últimos elementos: ", nova_lista[4:7])

#Crie um dicionário com 4 registros, onde o nome é a chave e a idade é o valor
nome_idade = {'Mateus': 25, 'Fernanda': 22, 'Tamires': 26, 'Cristiano': 25}
#Print todo o dicionário
print(nome_idade)
#Print a idade do Mateus
print(nome_idade["Mateus"])
#Adicione a chave Pedro com idade 27
nome_idade['Pedro'] = 27
#Print a idade de Pedro
print(nome_idade)
#Apague o registro Tamires
del nome_idade['Tamires']
#Print o tamanho do dicionário
print(len(nome_idade))

inteiros = [1, 2, 3, 4, 5]
print("Tamanho:", len(inteiros))
print("Menor elemento:", min(inteiros))
print("Maior elemento:", max(inteiros))
print("Soma dos elementos:", sum(inteiros))
print("Média dos elementos:", sum(inteiros)/5)
print("Penúltimo elemento:", inteiros[3])

terminal = input("Informe uma palavra ou expressão: \n").upper().replace(' ', '')
invertida = terminal[::-1]
if terminal == invertida:
    print("É palíndromo")
else:
    print("Não é um palíndromo")

import pandas as pd
import numpy as np
capitais = {
'Estado': {0: 'Acre', 1: 'Amapá', 2: 'Amazonas', 3: 'Pará', 4: 'Rondônia', 5: 'Roraima', 6: 'Tocantins',7:'Minas Gerais'},
'Sigla': {0: 'AC', 1: 'AP', 2: 'AM', 3: 'PA', 4: 'RO', 5: 'RR', 6: 'TO', 7:'MG'},
'População (milhoes)': {0: '0.8035', 1: '0.776', 2: '3.9', 3: '8,1', 4: '1.7', 5: '0.505', 6: '1,5', 7: np.nan}, 
'Capital': {0: 'Rio Branco', 1: 'Macapá', 2: 'Manaus', 3: 'Belém', 4: 'Porto Velho', 5: 'Boa Vista', 6: 'Palmas',7: 'Belo Horizonte'}}

df = pd.DataFrame(capitais)
df

"""a) Qual o formato do Dataframe (quantidade de linhas e colunas)?"""

Linhas = df.shape[0] 
Colunas = df.shape[1] 
print("Linhas: " + str(Linhas)) 
print("Colunas: " + str(Colunas))

"""b) Qual é a Capital que possuí o menor número de habitantes?

"""

import pandas as pd
import numpy as np
capitais = {
'Estado': {0: 'Acre', 1: 'Amapá', 2: 'Amazonas', 3: 'Pará', 4: 'Rondônia', 5: 'Roraima', 6: 'Tocantins',7:'Minas Gerais'},
'Sigla': {0: 'AC', 1: 'AP', 2: 'AM', 3: 'PA', 4: 'RO', 5: 'RR', 6: 'TO', 7:'MG'},
'População (milhoes)': {0: '0.8035', 1: '0.776', 2: '3.9', 3: '8,1', 4: '1.7', 5: '0.505', 6: '1,5', 7: np.nan}, 
'Capital': {0: 'Rio Branco', 1: 'Macapá', 2: 'Manaus', 3: 'Belém', 4: 'Porto Velho', 5: 'Boa Vista', 6: 'Palmas',7: 'Belo Horizonte'}}
df = pd.DataFrame(capitais)
df = df[df['População (milhoes)'].notna()]
minvalue_series = df['População (milhoes)'].min()
minvalue_series

"""c) Quais são as capitais que possuem população maior que 1000000 de habitantes?"""

import pandas as pd
import numpy as np
capitais = {
'Estado': {0: 'Acre', 1: 'Amapá', 2: 'Amazonas', 3: 'Pará', 4: 'Rondônia', 5: 'Roraima', 6: 'Tocantins',7:'Minas Gerais'},
'Sigla': {0: 'AC', 1: 'AP', 2: 'AM', 3: 'PA', 4: 'RO', 5: 'RR', 6: 'TO', 7:'MG'},
'População (milhoes)': {0: '0.8035', 1: '0.776', 2: '3.9', 3: '8,1', 4: '1.7', 5: '0.505', 6: '1,5', 7: np.nan}, 
'Capital': {0: 'Rio Branco', 1: 'Macapá', 2: 'Manaus', 3: 'Belém', 4: 'Porto Velho', 5: 'Boa Vista', 6: 'Palmas',7: 'Belo Horizonte'}}
df = pd.DataFrame(capitais)
df = df[df['População (milhoes)'].notna()]
filtro = df[(df['População (milhoes)']>'1')]['Capital']
filtro

"""d) O DataFrame possuí alguma coluna com valor nulo?"""

import pandas as pd
import numpy as np
capitais = {
'Estado': {0: 'Acre', 1: 'Amapá', 2: 'Amazonas', 3: 'Pará', 4: 'Rondônia', 5: 'Roraima', 6: 'Tocantins',7:'Minas Gerais'},
'Sigla': {0: 'AC', 1: 'AP', 2: 'AM', 3: 'PA', 4: 'RO', 5: 'RR', 6: 'TO', 7:'MG'},
'População (milhoes)': {0: '0.8035', 1: '0.776', 2: '3.9', 3: '8,1', 4: '1.7', 5: '0.505', 6: '1,5', 7: np.nan}, 
'Capital': {0: 'Rio Branco', 1: 'Macapá', 2: 'Manaus', 3: 'Belém', 4: 'Porto Velho', 5: 'Boa Vista', 6: 'Palmas',7: 'Belo Horizonte'}}
df = pd.DataFrame(capitais)
print(df.isna().sum())

"""e) Qual é a média da população do DataFrame?"""

import pandas as pd
import numpy as np
capitais = {
'Estado': {0: 'Acre', 1: 'Amapá', 2: 'Amazonas', 3: 'Pará', 4: 'Rondônia', 5: 'Roraima', 6: 'Tocantins',7:'Minas Gerais'},
'Sigla': {0: 'AC', 1: 'AP', 2: 'AM', 3: 'PA', 4: 'RO', 5: 'RR', 6: 'TO', 7:'MG'},
'População (milhoes)': {0: '0.8035', 1: '0.776', 2: '3.9', 3: '8,1', 4: '1.7', 5: '0.505', 6: '1,5', 7: np.nan}, 
'Capital': {0: 'Rio Branco', 1: 'Macapá', 2: 'Manaus', 3: 'Belém', 4: 'Porto Velho', 5: 'Boa Vista', 6: 'Palmas',7: 'Belo Horizonte'}}
df = pd.DataFrame(capitais)
df = df[df['População (milhoes)'].notna()]
df['População (milhoes)'] = pd.to_numeric(df['População (milhoes)'].str.replace(',', '.'))
mean = df['População (milhoes)'].mean()
print("Média da coluna 'População (milhoes)': ", mean)