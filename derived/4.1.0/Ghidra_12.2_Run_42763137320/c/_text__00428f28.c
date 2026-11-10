/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428f28; name: FUN_.text__00428f28
 */


void FUN__text__00428f28(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xf0) == 0) {
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0xc) = 0x2b;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    *(undefined8 *)((long)param_2 + 0x24) = 0x1ffffffff;
    *(undefined8 *)((long)param_2 + 0x1c) = 0x3f800000ffffffff;
    *(undefined4 *)((long)param_2 + 0x2c) = 2;
    return;
  }
  if ((ulong)*(ushort *)(param_2 + 2) == 0) {
    *(undefined4 *)((long)param_2 + 0x2c) = 0x11;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  lVar2 = *(long *)(param_1 + 0xf8);
  if (lVar2 == 0) {
    lVar2 = FUN__text__00400f90(5,(ulong)*(ushort *)(param_2 + 2) *
                                  (ulong)(*(ushort *)(param_1 + 0x48) >> 6),0x10);
    *(long *)(param_1 + 0xf8) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)((long)param_2 + 0x2c) = 2;
      return;
    }
  }
  *param_2 = lVar2;
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = 0x2b;
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x68))(*(long **)(param_1 + 0xf0),param_2);
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
  return;
}


