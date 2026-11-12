def dot_product(a, b):
    """
    Calculate the dot product of two vectors.
    
    Args:
        a: First vector (list of numbers)
        b: Second vector (list of numbers)
    
    Returns:
        The dot product (sum of element-wise products)
    """
    return sum(x * y for x, y in zip(a, b))


if __name__ == "__main__":
    x = [1, 2, 3]
    y = [4, 5, 6]
    print("Dot product:", dot_product(x, y))
