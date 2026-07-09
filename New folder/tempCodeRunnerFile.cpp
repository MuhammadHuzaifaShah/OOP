principal=p;
    year=y;
    intersetRate=float(r)/100;
    returnValue=principal;

    for(int i=0;i<y;i++)
    {
        returnValue  = returnValue * (1+intersetRate);
    }
}