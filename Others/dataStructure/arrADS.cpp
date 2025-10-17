#include<iostream>
using namespace std ;
class MYARR {
    private:
        int size ;
        int length=0 ;
        int * items = new int [size] ;
    public:
        MYARR(int s){
            // cout<< "enter the size of the array  \n" ;
            size = s ;
        };
        void Display(){
            cout<< "the size is : "<< size << endl ;
            cout<< "the length is : "<< length << endl ;
            if( length )  for( int i = 0 ; i< length ; i++ ){
                    cout<< items[i] << "\t" << endl ;
                    }else{
                        cout<< " the array is empty \n" ;
                    } 
        };
        void Fill ( int l  ){
            for( int p=0 ; p < l ;p++  ){
                cout<< " enter the : " << p+1 << " element : \n" ;
                cin>> items[ p ] ;
            };
            length = l ;

        }
        void Append ( int n ){
            if(length >= size){
                cout<< "the array is full \n";
            }else{
                items[length] = n ;
                length += 1 ;
            }
        };
        void Insert ( int index , int newItem ){
            if( size == length && index > length ){
                cout<< " there is an error \n " ;
                return ;
            };
            for( int o = length ; o > index ; o-- ){
                items[o]= items[o-1] ;
            };
            items[index] = newItem ;
            length += 1 ;
        };
        int Search ( int key ){
            for( int b = 0 ; b < length ; b++ ){
                if( items[b] == key ){
                    cout<< "element found @ =>  \n " ;
                    return b ;
                };
            };
                    cout<< "element not found  \n " ;
            return -1 ;
        };
        void Delete( int index ){
        if(index >=0 && index < length ){
            for (int m = index ; m < length - 1 ;m ++ ){
                items[ m ] = items [ m+1] ;
            };
            length -- ;
        }else{
            cout<< "index invalid \n" ;
        };
        };
        void Enlarge ( int newSize ){
            if( newSize > size ) {
            int * oldItems =items ;
            items = new int[newSize] ;
            for(int w=0 ; w<length ; w++ ){
                items[w] = oldItems[w] ;
            }
            size = newSize ;
            delete [] oldItems ;
            }else{
                cout<< "the new size must be bigger than the old one \n" ;
            }
        };
        void Merge ( MYARR sec  ){
            int* oldItems = items ;
            items = new int[ size + sec.getSize() ] ;
            for(int z=0 ; z<length ; z++ ){
                items [z] = oldItems[z] ;
            }
            delete [] oldItems ;
            for(int r = 0 ; r < sec.getLength() ; r++ ){
                items[length + r ] = sec.items[ r ] ;
            }
            size = size + sec.getSize() ;
            length = length + sec.getLength() ;
        }
        int getSize (){
            return size ;
        };
        int getLength (){
            return length ;
        };
        

};
int main(){

    MYARR first ( 6 ) ;
    first.Fill(3) ;
    // first .Display() ;
    // first .Append(40) ; 
    first .Display() ;
    // first . Insert( 2 , 30  );
    // first.Enlarge(8);
    MYARR second ( 3 ) ;
    second.Fill(3) ;
    first.Merge(second) ; 
    first .Display() ;



    return 0 ;
};