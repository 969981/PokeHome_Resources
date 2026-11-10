/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467ad0; name: FUN_.text__00467ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00467ad0(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  size_t __n;
  
  pbVar7 = (byte *)param_1[0x12];
  iVar3 = *(int *)(_DAT_008a4ac0 + (ulong)param_2 * 4);
  if (pbVar7 == (byte *)0x0) {
    if (iVar3 == param_3) {
      return;
    }
    __n = 0;
  }
  else {
    bVar4 = *pbVar7;
    __n = (size_t)bVar4;
    uVar2 = (uint)bVar4;
    if (bVar4 < 2) {
      uVar2 = 1;
    }
    uVar6 = (ulong)uVar2;
    pbVar9 = pbVar7 + (__n & 0xfc);
    uVar10 = uVar6;
    pbVar8 = pbVar7;
    do {
      pbVar9 = pbVar9 + 4;
      pbVar8 = pbVar8 + 1;
      if ((uint)*pbVar8 == (param_2 & 0xff)) {
        if (*(int *)pbVar9 == param_3) {
          return;
        }
        goto LAB__text__00467b88;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (iVar3 == param_3) {
      return;
    }
LAB__text__00467b88:
    pbVar9 = pbVar7 + ((ulong)(uint)bVar4 & 0xfc);
    do {
      pbVar9 = pbVar9 + 4;
      pbVar7 = pbVar7 + 1;
      if ((uint)*pbVar7 == (param_2 & 0xff)) goto LAB__text__00467c30;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar1 = __n + 1;
  uVar2 = ((uint)lVar1 & 0x1fc) + 4;
  puVar5 = (undefined1 *)FUN__text__00400f80(0,uVar2 + (uint)lVar1 * 4);
  if (puVar5 != (undefined1 *)0x0) {
    if (param_1[0x12] != 0) {
      memcpy(puVar5 + 1,(void *)(param_1[0x12] + 1),__n);
      memcpy(puVar5 + uVar2,(void *)(param_1[0x12] + (ulong)(((uint)__n & 0xfc) + 4)),__n << 2);
      FUN__text__00400fc0(0,param_1[0x12]);
    }
    puVar5[lVar1] = (char)param_2;
    pbVar9 = puVar5 + __n * 4 + (ulong)uVar2;
    *puVar5 = (char)lVar1;
    param_1[0x12] = (long)puVar5;
LAB__text__00467c30:
    *(int *)pbVar9 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00467c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  return;
}


