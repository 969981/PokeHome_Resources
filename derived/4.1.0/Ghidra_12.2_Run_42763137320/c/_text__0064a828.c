/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064a828; name: FUN_.text__0064a828
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0064a828(uint param_1,ushort param_2,byte *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  
  bVar2 = (param_1 & 0xfffffffe) != 0x402;
  uVar3 = 0;
  if ((int)param_1 < 0x402 && bVar2) {
    uVar3 = param_2;
  }
  if (uVar3 < 0x1c) {
    uVar5 = 0;
    if ((int)param_1 < 0x402 && bVar2) {
      uVar5 = (ulong)param_1;
    }
    lVar6 = *(&DAT_00c473e0)[uVar5 * 4];
    uVar5 = (&DAT_00c473e0)[uVar5 * 4][1] - lVar6 >> 3;
    if ((uVar3 < uVar5) && (*(long *)(lVar6 + (ulong)uVar3 * 8) != 0)) goto LAB__text__0064a8a0;
  }
  uVar3 = 0;
  lVar6 = *DAT_00c473e0;
  uVar5 = DAT_00c473e0[1] - lVar6 >> 3;
LAB__text__0064a8a0:
  if (uVar3 < uVar5) {
    return *(ulong *)(lVar6 + (ulong)uVar3 * 8);
  }
  uVar5 = FUN__text__0064ab3c();
  *param_3 = 0;
  if ((int)uVar5 < 0x402) {
    puVar1 = (undefined8 *)(_DAT_008a64f0 + (uVar5 & 0xffffffff) * 0x20);
    plVar4 = (long *)*puVar1;
    lVar6 = *plVar4;
    if (plVar4[1] != lVar6) {
      bVar8 = 0;
      uVar7 = 0;
      do {
        if (*(long *)(lVar6 + uVar7 * 8) != 0) {
          *(short *)(CONCAT44(extraout_var,extraout_w1) + (ulong)bVar8 * 2) = (short)uVar7;
          bVar8 = *param_3 + 1;
          *param_3 = bVar8;
          plVar4 = (long *)*puVar1;
          lVar6 = *plVar4;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(plVar4[1] - lVar6 >> 3));
    }
  }
  return uVar5;
}


