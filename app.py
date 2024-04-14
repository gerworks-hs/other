def mostrar_web(campo_estudio): if campo_estudio.lower() == "fp": 
        print("Dado que vas a estudiar FP, aquí está la web con toda 
        la información: 
        https://www.larioja.org/educacion/es/destacados-nivel-2/formacion-profesional")
    elif campo_estudio.lower() == "bachiller": print("Dado que vas a 
        estudiar bachiller, aquí está la web con toda la información: 
        https://www.larioja.org/edu-alumnos-familia/es/escolarizacion")
    else: print("Campo de estudio no valido.") def main(): campo_estudio 
    = input("¿Qué campo de estudio vas a elegir? (FP o bachiller): ") 
    mostrar_web(campo_estudio)
if __name__ == "__main__": main()
