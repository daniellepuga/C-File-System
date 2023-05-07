// freeing blocks


// set a specific bit to thev alue in set (0 or 1)
set_free(unsigned char *block, int num, int set){

}

// find a 0 bit and return its index
find_free(unsigned char *block){

}

int find_low_clear_bit(unsigned char x)
{
    for (int i = 0; i < 8; i++)
        if (!(x & (1 << i)))
            return i;
    
    return -1;
}