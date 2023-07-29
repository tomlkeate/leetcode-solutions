int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    unsigned short richest = 0;
    for (unsigned char i = 0; i < accountsSize; i++) {
        unsigned short curRichest = 0;
        for (unsigned char j = 0; j < *accountsColSize; j++) {
            curRichest+=accounts[i][j];
        }
        if (curRichest > richest)
            richest = curRichest;
    }
    return richest;

}
