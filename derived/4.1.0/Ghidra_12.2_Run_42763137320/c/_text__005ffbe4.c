/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ffbe4; name: FUN_.text__005ffbe4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ffbe4(long param_1,byte *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar2 = (param_4 & 0xff) - 1;
  if (uVar2 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x005ffc0c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__005ffc18 + (ulong)*(byte *)((ulong)uVar2 + 0x75901c) * 4))();
    return;
  }
  *param_2 = 0;
  if ((int)param_3 < 0x402) {
    puVar1 = (undefined8 *)(_DAT_008a63e8 + (ulong)param_3 * 0x20);
    plVar3 = (long *)*puVar1;
    lVar4 = *plVar3;
    if (plVar3[1] != lVar4) {
      bVar6 = 0;
      uVar5 = 0;
      do {
        if (*(long *)(lVar4 + uVar5 * 8) != 0) {
          *(short *)(param_1 + (ulong)bVar6 * 2) = (short)uVar5;
          bVar6 = *param_2 + 1;
          *param_2 = bVar6;
          plVar3 = (long *)*puVar1;
          lVar4 = *plVar3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)(plVar3[1] - lVar4 >> 3));
    }
  }
  return;
}


