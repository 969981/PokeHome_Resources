/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415730; name: FUN_.text__00415730
 */


void FUN__text__00415730(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (DAT_00aea228 != 0) {
    puVar2 = DAT_00aea220;
    do {
      uVar1 = FUN__text__004157a8(*puVar2,param_1,1);
      if ((uVar1 & 1) != 0) {
        FUN__text__004d0310(*puVar2);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != DAT_00aea220 + DAT_00aea228);
  }
  return;
}


