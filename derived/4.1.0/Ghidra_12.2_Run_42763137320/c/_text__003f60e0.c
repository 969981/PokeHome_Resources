/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f60e0; name: FUN_.text__003f60e0
 */


void FUN__text__003f60e0(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)DAT_00ae8870;
  if (DAT_00ae8870 != 0) {
    uVar4 = 0;
    lVar3 = DAT_00ae8868;
    do {
      lVar1 = *(long *)(lVar3 + uVar4 * 8);
      if (lVar1 != 0) {
        FUN__text__003faa00(lVar1,lVar1 == param_1,param_2);
        uVar2 = (ulong)DAT_00ae8870;
        lVar3 = DAT_00ae8868;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


