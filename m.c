while (gameCont < 10) {
  getQuestion(&num1, &num2, &correctAnswer);
  do {
    printf("\nHow much is %d times %d: ", num1, num2);
    scanf("%d", &answer);
    if (answer ==-1) {
      gameCont = 10;
    } else if ( answer == correctAnswer) {
      get_good_response();
      correctAnswers++;
      gameCont++;
      user = true;
    }else{
      get_bad_response();
      if
      user = false;
    }
  }while (user == false);

}
