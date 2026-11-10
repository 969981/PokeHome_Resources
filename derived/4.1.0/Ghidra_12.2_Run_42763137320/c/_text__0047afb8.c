/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047afb8; name: FUN_.text__0047afb8
 */


undefined8 FUN__text__0047afb8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(ushort *)(param_1 + 0x14a) & 1) == 0) {
    uVar1 = 1;
    if ((((*(int *)(param_1 + 0x104) == 0) && (*(int *)(param_1 + 0x108) == 0)) &&
        (*(int *)(param_1 + 0x10c) == 0)) && (*(int *)(param_1 + 0x110) == 0)) {
      uVar1 = 0;
      if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
        lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x38);
        if ((lVar3 != 0) &&
           (((*(char *)(lVar3 + 0xc6) != '\0' &&
             ((uVar2 = (**(code **)(**(long **)(param_1 + 0x1d8) + 0x30))(), (uVar2 & 1) != 0 ||
              ((0.0 < *(float *)(lVar3 + 100) && (*(int *)(lVar3 + 0x60) != 0)))))) ||
            (*(int *)(lVar3 + 0x38) != 0)))) {
          return 1;
        }
        return 0;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


