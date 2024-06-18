import math

def calcular_distancia(x1, y1, x2, y2):
    distancia = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return distancia

def calcular_tiempo_estimado(distancia, velocidad_promedio):
    tiempo = distancia / velocidad_promedio
    return tiempo


x1, y1 = 0, 0
x2, y2 = 5, 5
distancia_enteros = calcular_distancia(x1, y1, x2, y2)
print(f"Distancia entre ({x1},{y1}) y ({x2},{y2}): {distancia_enteros}")

x3, y3 = 1.5, 2.5
x4, y4 = 7.5, 9.5
distancia_dobles = calcular_distancia(x3, y3, x4, y4)
print(f"\nDistancia entre ({x3},{y3}) y ({x4},{y4}): {distancia_dobles}")

distancia_km = 100.0
velocidad_promedio_kmph = 80.0
tiempo_estimado = calcular_tiempo_estimado(distancia_km, velocidad_promedio_kmph)
print(f"\nTiempo estimado de entrega para {distancia_km} km a {velocidad_promedio_kmph} km/h: {tiempo_estimado} horas")

