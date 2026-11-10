/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165bc8; name: FUN_.text__00165bc8
 */


void FUN__text__00165bc8(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = param_4 & 0xffff | 0x20000;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),param_3)
    ;
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar1 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar1 + 0x12) = *(ushort *)(lVar1 + 0x12) & 0xfffe;
  }
  return;
}


