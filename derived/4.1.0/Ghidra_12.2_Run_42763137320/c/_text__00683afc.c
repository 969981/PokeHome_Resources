/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683afc; name: FUN_.text__00683afc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00683afc(byte *param_1,long param_2,byte *param_3,long param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  lVar7 = _DAT_008a6610;
  if (param_4 != 0) {
    bVar2 = *param_1;
    lVar8 = param_4;
    do {
      bVar3 = *param_3;
      pbVar1 = (byte *)(lVar7 + (ulong)bVar2 * 0x30 + (ulong)(bVar3 >> 4) * 2 + (ulong)(bVar3 >> 4))
      ;
      bVar4 = pbVar1[1];
      if ((bVar4 >> 2 & 1) != 0) {
        return -0x20b;
      }
      if ((bVar4 >> 1 & 1) != 0) {
        puVar10 = *(undefined1 **)(param_2 + 0x18);
        uVar5 = *(undefined1 *)(lVar7 + (ulong)bVar2 * 0x30 + (ulong)(bVar3 >> 4) * 3 + 2);
        *(undefined1 **)(param_2 + 0x18) = puVar10 + 1;
        *puVar10 = uVar5;
        bVar3 = *param_3;
      }
      uVar9 = (ulong)*pbVar1;
      lVar6 = ((ulong)bVar3 & 0xf) * 3;
      pbVar1 = (byte *)(lVar7 + uVar9 * 0x30 + lVar6);
      bVar4 = pbVar1[1];
      if ((bVar4 >> 2 & 1) != 0) {
        return -0x20b;
      }
      if ((bVar4 >> 1 & 1) != 0) {
        puVar10 = *(undefined1 **)(param_2 + 0x18);
        uVar5 = *(undefined1 *)(lVar7 + uVar9 * 0x30 + lVar6 + 2);
        *(undefined1 **)(param_2 + 0x18) = puVar10 + 1;
        *puVar10 = uVar5;
      }
      bVar2 = *pbVar1;
      lVar8 = lVar8 + -1;
      param_3 = param_3 + 1;
      param_1[1] = bVar4 & 1;
      *param_1 = bVar2;
    } while (lVar8 != 0);
  }
  if ((param_5 != 0) && (param_1[1] == 0)) {
    param_4 = -0x20b;
  }
  return param_4;
}


