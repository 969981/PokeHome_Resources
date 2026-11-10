/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f335c; name: FUN_.text__005f335c
 */


undefined1 FUN__text__005f335c(long param_1,short param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0x7a);
    uVar4 = (ulong)uVar2;
    uVar1 = uVar2 + 1;
    if (uVar1 < *(ushort *)(param_1 + 0x78)) {
      *(short *)(param_1 + 0x7a) = (short)uVar1;
      *(short *)(*(long *)(param_1 + 0x58) + uVar4 * 2) = param_2;
      uVar4 = (ulong)*(ushort *)(param_1 + 0x7a);
    }
    else {
      if (param_2 != 0) {
        return 0;
      }
      if (uVar1 != *(ushort *)(param_1 + 0x78)) {
        return 0;
      }
      *(ushort *)(param_1 + 0x7a) = uVar2 + 1;
    }
    *(undefined2 *)(*(long *)(param_1 + 0x58) + uVar4 * 2) = 0;
    uVar3 = 1;
  }
  return uVar3;
}


