class Bake:
    def __init__(self, cream, dough):
        self.cream = cream
        self.dough = dough

    def makeCake(self):
        return f'add {self.dough}gm dough and {self.cream}gm cream and then bake'


# 18 and 100 are the values of cream and dough that are provided as params in __init__ constructor fnc
cake1 = Bake(18, 100)
print(cake1.makeCake())


class Cook:
    def boil(self):
        return "boil the food"


class makeMaggi(Cook):
    def addMasala(self):
        return "Add masala to the maggi"


start = makeMaggi()
print(start.boil())
print(start.addMasala())
end = Cook()
