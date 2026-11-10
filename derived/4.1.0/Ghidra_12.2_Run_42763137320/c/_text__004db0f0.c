/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db0f0; name: FUN_.text__004db0f0
 */


void FUN__text__004db0f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0xca) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + -0x18;
    }
    if (*(short *)(lVar1 + 0x160) == 0) {
      *(undefined1 *)(param_1 + 0xcc) = 0;
      if (*(int *)((long)param_2 + 0x2c) == 0x11) {
        *(undefined1 *)(param_1 + 200) = 1;
      }
      if (*param_2 == 0) {
        lVar1 = FUN__text__00400f90(5,(ulong)*(ushort *)(param_2 + 2) *
                                      (ulong)*(byte *)(param_2 + 1) * 4,0x10);
        *(long *)(param_1 + 0xd8) = lVar1;
        if (lVar1 == 0) {
          *(undefined4 *)((long)param_2 + 0x2c) = 2;
          return;
        }
        *param_2 = lVar1;
        *(undefined2 *)((long)param_2 + 0x12) = 0;
      }
      *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_2 + 0x2c);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x40))(*(long **)(param_1 + 0xd0),param_2);
      *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
      return;
    }
  }
  if (*(char *)(param_1 + 0xcc) == '\0') {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return;
}


