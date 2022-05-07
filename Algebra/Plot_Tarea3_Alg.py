import plotly.graph_objs as go
import plotly.offline as pyo
from plotly import tools

from math import *
import numpy as np

plot_1 = False
plot_4 = True
if plot_1:
	Range = [i for i in range(0, 45)]
	Domain = [i for i in range(0, 50)]
	invDomain = [i for i in range(0, 0)]
	invRange = [i for i in range(0, 0)]
if plot_4:
	Range = [i for i in range(0, 155)]
	Domain = [i for i in range(0, 155)]

	invDomain = [i for i in range(14, 150)]
	invRange = [i for i in range(14, 142)]

# q(t)
q = []
for t in Range:
	eq = (140)/(1 + 9 * exp(-0.165 * t))
	q.append(round(eq, 2))

# q(t)^-1
inv_q = []
for t in invRange:
	inv = -(np.log((140-t)/(9*t)))/(0.165)
	inv_q.append(round(inv, 2))


equation = go.Scatter(
		name='q(t)',
		x=Domain,
		y=q,
		mode='lines',
		line={'color': 'rgb(51, 204, 153)'},
	)
inverse = go.Scatter(
	name='q(t)^-1',
	x=invDomain,
	y=inv_q,
	mode='lines',
	line={'color': '#E75151'}
	)
straight_line = go.Scatter(
	name='x=y',
	x=Domain,
	y=Domain,
	mode='lines',
	line={'dash': 'dash',
		'width': 1.4,
		'color': '#808080'}
	)
intersection = go.Scatter(
		name='Intersección',
		line={'color': '#808080'},
		x=[0, 10],
		y=[14, 51.31],
		mode='markers+text',
		text=['$q(0)=14$', '$q(10)=51$'],
		textposition='bottom right',
		marker=dict(
			size=10,
			symbol='circle'
		),
	)
intersection2 = go.Scatter(
		name='Intersección 2',
		line={'color': '#808080'},
		x=[14, 139],
		y=[0, 43.22],
		mode='markers+text',
		text=['$q^{-1}(14)=0$', '$q^{-1}(43)=139$'],
		textposition='bottom right',
		marker=dict(
			size=10,
			symbol='circle'
		),
	)

if plot_1:
	data = [equation, intersection]

if plot_4:
	data = [equation, inverse, straight_line, intersection, intersection2]

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
fig.add_vline(x=0, line_width=2, line_dash='dash')
fig.add_hline(y=140, line_width=2, line_dash='dash')
if plot_4:
	fig.add_vline(x=139, line_width=2, line_dash='dash')

pyo.plot(fig, filename='algebra.html', include_mathjax='cdn')
