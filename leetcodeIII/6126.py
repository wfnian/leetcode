class FoodRatings(object):
    def __init__(self, foods, cuisines, ratings):
        """
        :type foods: List[str]
        :type cuisines: List[str]
        :type ratings: List[int]
        a,A,18
        b,A,19
        c,B,12
        """
        self.all = ['food', 'cuisine', 0] * len(foods)
        self.r1 = dict()
        self.r2 = dict()
        for i in range(len(foods)):
            self.all[i] = [foods[i], cuisines[i], ratings[i]]
            self.r1[foods[i]] = i
            if cuisines[i] in self.r2:
                self.r2.append(ratings[i])
            else:
                self.r2 = []
                self.r2.append(ratings[i])

    def changeRating(self, food, newRating):
        """
        :type food: str
        :type newRating: int
        :rtype: None
        """
        tmp = self.r1[food]
        b = self.all[tmp][1]
        self.r2[b].remove(tmp)
        self.all[tmp][2] = newRating
        self.r2[b].append(newRating)

    def highestRated(self, cuisine):
        """
        :type cuisine: str
        :rtype: str
        """
        print(self.r2)
        return max(self.r2[cuisine])
