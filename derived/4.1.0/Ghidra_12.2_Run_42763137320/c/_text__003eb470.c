/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb470; name: FUN_.text__003eb470
 */


void FUN__text__003eb470(long param_1,long param_2,byte param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  uVar1 = FUN__text__00699b8c(param_1 + 0x10);
  if (uVar1 == 0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x98))
              (*(long **)(param_2 + 0x18),*(undefined8 *)(param_1 + 8),1,param_3 & 1);
  }
  else {
    lVar2 = FUN__text__00699ba4(param_1 + 0x10);
    uVar4 = (ulong)uVar1;
    do {
      lVar3 = FUN__text__0069e6c0(*(undefined8 *)(param_2 + 0x20),lVar2);
      if (lVar3 != 0) {
        FUN__text__006c0e30(*(undefined8 *)(param_1 + 8),lVar3,param_3 & 1);
      }
      lVar2 = lVar2 + 0x24;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(byte *)(param_1 + 3) = param_3 & 1;
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


