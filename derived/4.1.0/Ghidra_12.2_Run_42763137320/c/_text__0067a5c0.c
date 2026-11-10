/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a5c0; name: FUN_.text__0067a5c0
 */


void FUN__text__0067a5c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x88);
    FUN__text__00683bec(lVar1,param_2);
    FUN__text__006809e4(param_2,lVar1);
    lVar1 = lVar2;
  }
  return;
}


