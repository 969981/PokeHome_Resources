/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ff98; name: FUN_.text__0044ff98
 */


void FUN__text__0044ff98(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0xe0) + 0x18);
  if (((*(byte *)((long)plVar2 + 10) >> 4 & 1) != 0) && (*(int *)(param_2 + 0x1c) != -1)) {
    FUN__text__0048e990(DAT_00ae9a88,(int)plVar2[0x50]);
  }
  uVar1 = (**(code **)(*plVar2 + 200))(plVar2);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < *(ushort *)(param_2 + 0x12)) {
      *(short *)(param_2 + 0x12) = (short)uVar1;
    }
    *(undefined4 *)(param_1 + 0xf8) = 2;
  }
  return;
}


