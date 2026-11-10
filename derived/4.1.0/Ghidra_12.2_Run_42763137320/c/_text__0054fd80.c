/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054fd80; name: FUN_.text__0054fd80
 */


void FUN__text__0054fd80(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((int)param_1[5] != 0) {
    uVar4 = (ulong)(uint)((int)param_1[5] << 3);
    lVar3 = *param_1;
    uVar2 = 0;
    do {
      uVar4 = (ulong)((int)uVar4 + 0xfU & 0xfffffff0);
      *(ulong *)(lVar3 + uVar2 * 8) = uVar4 + lVar3;
      uVar1 = *(uint *)(param_2 + uVar2 * 4);
      if (uVar1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0054fe18 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0054fde0 + (ulong)*(byte *)((ulong)uVar1 + 0x73e392) * 4))();
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 5));
    if (*(uint *)(param_1 + 5) != 0) {
      uVar2 = 0;
      do {
        uVar1 = *(uint *)(param_2 + uVar2 * 4);
        if (uVar1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0054ff50 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0054ff18 + (ulong)*(ushort *)((ulong)uVar1 * 2 + 0x73e39e) * 4))();
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 5));
    }
  }
  return;
}


