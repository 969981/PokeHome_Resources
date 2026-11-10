/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c3b4; name: FUN_.text__0065c3b4
 */


long FUN__text__0065c3b4(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) || ((char)param_1[0x3c] != '\0')) {
    return 0;
  }
  param_1 = param_1 + 4;
  lVar2 = FUN__text__00656c60(param_1);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)*param_1;
    FUN__text__00656b90(param_1,(long *)*param_1,0);
    FUN__text__00656c60(param_1);
    uVar1 = FUN__text__00678264();
    *param_2 = uVar1;
    lVar3 = lVar3 + 0x18;
  }
  return lVar3;
}


