void sommeDes(int N) {
    if(N<=18 && N>=3){
        for(int i=1; i<=6; i++){
            for(int j=1; j<=6; j++){
                for(int k=1; k<=6; k++) {
                    if(i+j+k == N)
                        print("i%j%k",i,j,k);
                }
                printf();
            }
        }

    }
}


int main(void) {
    sommeDes(13);
    return 0;
}