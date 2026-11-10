/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c97c; name: FUN_.text__0012c97c
 */


undefined8 FUN__text__0012c97c(undefined4 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_2 + 0x1c0) != 0) {
    uVar1 = FUN__text__003c7ec0();
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_2 + 0x1c0) == 0) {
        return 0;
      }
      FUN__text__003c7d90(*(long *)(param_2 + 0x1c0),param_3);
    }
    FUN__text__003c8010(param_1,*(undefined8 *)(param_2 + 0x1c0),param_3);
    uVar2 = 1;
  }
  return uVar2;
}


