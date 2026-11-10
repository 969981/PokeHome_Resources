/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00588c90; name: FUN_.text__00588c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00588c90(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar9 = (ulong)(int)(*(uint *)(_DAT_008a3f58 + 0x60) &
                      (uint)(*(ulong *)*param_2 >> ((ulong)*(byte *)(param_2 + 1) & 0x3f)));
  if (*(char *)((long)param_1 + 0x1b) == '\x02') {
    lVar3 = *param_1;
    uVar5 = *(ushort *)(lVar3 + (*(ushort *)(param_1 + 3) & uVar9) * 2);
    uVar6 = (uint)uVar5;
    bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar9));
    uVar8 = (ulong)bVar4;
    if (-1 < (short)uVar5) {
      uVar10 = 0;
      lVar11 = lVar3 + (ulong)uVar6 * 2;
      uVar9 = uVar9 >> (uVar8 & 0x3f);
      Hint_Prefetch(lVar3 + (ulong)uVar5 * 2,0,0,0);
      do {
        lVar11 = lVar11 + uVar10 * 2;
        uVar10 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        bVar4 = *(byte *)(lVar11 + uVar10);
        uVar10 = (ulong)bVar4;
      } while (-1 < (char)bVar4);
      uVar6 = (uint)*(ushort *)(lVar11 + (uVar10 & 0x7f) * 2);
      goto LAB__text__00588d98;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x1b) != '\x01') {
      uVar7 = 0;
      uVar6 = 0;
      goto LAB__text__00588d98;
    }
    lVar3 = *param_1;
    uVar5 = *(ushort *)(lVar3 + (*(ushort *)(param_1 + 3) & uVar9) * 2);
    uVar6 = (uint)uVar5;
    bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar9));
    uVar8 = (ulong)bVar4;
    if (-1 < (short)uVar5) {
      uVar10 = 0;
      lVar11 = lVar3 + (ulong)uVar6 * 2;
      uVar9 = uVar9 >> (uVar8 & 0x3f);
      Hint_Prefetch(lVar3 + (ulong)uVar5 * 2,0,0,0);
      do {
        lVar11 = lVar11 + uVar10 * 2;
        uVar10 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        bVar4 = *(byte *)(lVar11 + uVar10);
        uVar10 = (ulong)bVar4;
      } while (-1 < (char)bVar4);
      uVar6 = bVar4 & 0x7f;
      goto LAB__text__00588d98;
    }
  }
  uVar7 = (uint)bVar4;
  uVar6 = uVar6 & 0x7fff;
LAB__text__00588d98:
  iVar1 = uVar7 + *(byte *)(param_2 + 1);
  iVar2 = iVar1 >> 5;
  *(byte *)(param_2 + 1) = (byte)iVar1 & 0x1f;
  *param_2 = *param_2 + (long)iVar2 * 4;
  *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) - iVar2;
  return uVar6;
}


