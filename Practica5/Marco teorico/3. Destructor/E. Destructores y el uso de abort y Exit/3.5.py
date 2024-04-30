class MiClase:
    def __init__(self):
        print("Constructor llamado")

    def __del__(self):
        # Simulando una condición de error
        error = True

        if error:
            print("Error detectado en el destructor")
            # Abortar el programa abruptamente
            import sys
            sys.exit(1)
        else:
            print("Destructor llamado normalmente")


print("Inicio del programa")

objeto = MiClase()

error = True

if error:
    print("Error detectado en main()")
    import sys
    sys.exit(1)

print("Fin del programa")
