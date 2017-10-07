int findMin(int a, int b, int c) {
    int m;
    if(a < b)
        {
            m = a;
            if (c < a)
            {
                m = c;
            }
        }
    else if(b < a)
        {
            m = b;
            if (c < b)
            {
                m = c;
            }
        }
    return m;
}
