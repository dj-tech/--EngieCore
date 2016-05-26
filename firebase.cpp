firebase::auth::Auth* auth = firebase::auth::Auth::GetAuth(app);
firebase::Future result =
    auth->SignInWithEmailAndPasswordLastResult();
if (result.Status() == firebase::kFutureStatusComplete) {
  if (result.Error() == firebase::auth::kAuthErrorNone) {
    firebase::auth::User* user = *result.Result();
    printf("Sign in succeeded for email %s\n", user->Email().c_str());
    // ...
  }
}
