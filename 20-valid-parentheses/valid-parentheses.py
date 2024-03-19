class Solution:
    def isValid(self, s: str) -> bool:
        storing_opening = []
        # initial input
        parentheses_pair = {
            '(': ')',
            '[': ']',
            '{': '}'
        }
        # loop for checking
        for char in s:
            if char in parentheses_pair:
                storing_opening.append(char)
            else:
                if not storing_opening or parentheses_pair[storing_opening.pop()] != char:
                    return False
        # Placeholder return, the function is incomplete.
        return  not storing_opening