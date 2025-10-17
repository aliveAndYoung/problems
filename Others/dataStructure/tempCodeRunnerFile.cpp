    if (isEmpty())
        {
            cout << "the list is empty \n" ;
        }
        else{
        Node * curn = head;
        while( curn != NULL ){
            cout<< "the data  : " << curn -> data << endl ;
            curn = curn->next ;
        }
    };