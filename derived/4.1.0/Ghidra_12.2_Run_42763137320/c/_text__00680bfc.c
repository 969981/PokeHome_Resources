/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680bfc; name: FUN_.text__00680bfc
 */


void FUN__text__00680bfc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*param_1 + (uVar3 + param_1[2] & param_1[1]) * 8);
      FUN__text__00683180(puVar2[1]);
      FUN__text__00683180(*puVar2);
      FUN__text__006809e4(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[3]);
  }
  FUN__text__006809e4(lVar1,*param_1);
  return;
}


