import plotly.graph_objs as go
import plotly.offline as pyo
from plotly import tools

import numpy as np
from math import *

q = []

for t in range(0, 149):
	eq = (140)/(1 + 9 * exp(-0.165 * t))
	q.append(round(eq, 2))
#	print(f'q({t}) = {round(eq, 2)}')

equation = go.Scatter(
		name='q(x)',
		x=[i for i in range(0, 45)],
		y=q,
		mode='lines',
		line={'color': 'rgb(51, 204, 153)'},
	)
intersection = go.Scatter(
		name='Intersección',
		line={'color': '#808080'},
		x=[0, 10],
		y=[14, 51.31],
		mode='markers+text',
		text=[r'$q(0)=14$', r'$q(10)=51$'],
		textposition='bottom right',
		marker=dict(
			size=10,
			symbol='circle'
		),
	)

data = [equation, intersection]
layout = go.Layout(
	title=('Cantidad de Individuos de cierta especie t años luego de haber sido introducida en un hábitat controlado.'),
	autosize=True,
	showlegend=False,
	xaxis={'title': '$t$'},
	yaxis={'title': 'q(t) Cantidad de Individuos de la Especie'},
	hovermode='closest',
	template='simple_white',
)

fig = go.Figure(data=data, layout=layout)
fig.add_vline(x=10, line_width=2, line_dash='dash')
fig.add_vline(x=0, line_width=2, line_dash='dash')

pyo.plot(fig, filename='algebra.html', include_mathjax='cdn')
