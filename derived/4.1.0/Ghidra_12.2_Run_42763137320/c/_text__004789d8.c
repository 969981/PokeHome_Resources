/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004789d8; name: FUN_.text__004789d8
 */


void FUN__text__004789d8(float param_1,long param_2,int param_3)

{
  long lVar1;
  
  if ((*(ushort *)(param_2 + 0x208) >> 6 & 1) == 0) {
    if (param_3 - 0x12U < 0x35) {
                    /* WARNING: Could not emulate address calculation at 0x00478a14 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__00478a20 + (ulong)*(byte *)((ulong)(param_3 - 0x12U) + 0x73b680) * 4))
                ();
      return;
    }
    lVar1 = *(long *)(param_2 + 0x1c8);
    if (lVar1 != 0) {
      if (param_3 == 0x44) {
        *(int *)(lVar1 + 0x10) = (int)param_1;
        return;
      }
      if (param_3 == 0x43) {
        FUN__text__0047b440(lVar1,(int)param_1);
        return;
      }
      if (param_3 == 0x42) {
        *(uint *)(lVar1 + 0x30) =
             *(uint *)(lVar1 + 0x30) & 0x7fffffff | (uint)(param_1 != 0.0) << 0x1f;
        return;
      }
    }
  }
  return;
}


