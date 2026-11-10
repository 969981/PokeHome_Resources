/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bd38; name: FUN_.text__0066bd38
 */


long FUN__text__0066bd38(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = 0;
    do {
      lVar1 = FUN__text__0066bcc8(lVar2,*param_1);
      if (lVar1 == 0) {
        FUN__text__0066bd88(lVar2);
        return 0;
      }
      param_1 = (undefined8 *)param_1[1];
      lVar2 = lVar1;
    } while (param_1 != (undefined8 *)0x0);
  }
  return lVar1;
}


