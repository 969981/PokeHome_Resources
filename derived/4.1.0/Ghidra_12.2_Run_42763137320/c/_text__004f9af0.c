/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9af0; name: FUN_.text__004f9af0
 */


undefined8 FUN__text__004f9af0(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) && (iVar1 = FUN__text__004ccc20(), iVar1 != 0)) {
      if ((param_3 & 1) != 0) {
        uVar2 = FUN__text__00464880();
        return uVar2;
      }
      FUN__text__00464a20();
    }
  }
  return 1;
}


