/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b170; name: FUN_.text__0064b170
 */


void FUN__text__0064b170(undefined8 param_1,undefined8 param_2,long param_3)

{
  ApplicationErrorArg aAStack_1054 [4116];
  
  nn::err::ApplicationErrorArg::ApplicationErrorArg(aAStack_1054);
  nn::err::ApplicationErrorArg::SetApplicationErrorCodeNumber((uint)aAStack_1054);
  nn::err::ApplicationErrorArg::SetDialogMessage((char *)aAStack_1054);
  if (param_3 != 0) {
    nn::err::ApplicationErrorArg::SetFullScreenMessage((char *)aAStack_1054);
  }
  nn::err::ApplicationErrorArg::SetLanguageCode((LanguageCode *)aAStack_1054);
  nn::err::ShowApplicationError(aAStack_1054);
  return;
}


