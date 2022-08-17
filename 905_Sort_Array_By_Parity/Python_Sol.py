        new_list = []
        for elem in nums:
            if(elem&1):
                new_list.append(elem)
            else:
                new_list.insert(0,elem)
        return new_list