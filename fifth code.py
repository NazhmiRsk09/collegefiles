import pandas as pd

df = pd.read_csv('vgsales.csv')
Genre = sorted(df['Genre'].unique())

df2 = pd.DataFrame(Genre, columns = ['Genre'])
print(df2)