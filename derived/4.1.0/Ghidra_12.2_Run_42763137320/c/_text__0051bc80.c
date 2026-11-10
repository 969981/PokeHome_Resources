/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051bc80; name: FUN_.text__0051bc80
 */


byte * FUN__text__0051bc80(long *param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    iVar6 = 0;
    *param_3 = 0;
    lVar9 = *param_1;
  }
  else {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      bVar3 = *(byte *)(*param_1 + (long)iVar1);
      if (bVar3 == param_2) {
        *param_3 = 1;
        return (byte *)(*param_1 + (long)iVar1);
      }
      if (bVar3 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar4 = uVar8 - (bVar3 < param_2);
      uVar8 = uVar4 >> 1;
    } while (1 < uVar4);
    *param_3 = 0;
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 < uVar8) {
      pbVar5 = (byte *)(ulong)uVar4;
      *(uint *)(param_1 + 1) = uVar4 + 1;
    }
    else {
      iVar6 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar6 = 1;
      }
      uVar8 = iVar6 + uVar8;
      lVar9 = FUN__text__00400f80(9,uVar8);
      if (lVar9 == 0) {
        return (byte *)0x0;
      }
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar9)) {
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              puVar2 = (undefined1 *)(lVar9 + uVar10);
              *puVar2 = *(undefined1 *)(*param_1 + uVar10);
              lVar7 = *param_1 + uVar10;
              uVar10 = uVar10 + 2;
              puVar2[1] = *(undefined1 *)(lVar7 + 1);
            } while (((ulong)uVar4 & 0xfffffffe) != uVar10);
          }
          if ((uVar4 & 1) != 0) {
            *(undefined1 *)(lVar9 + uVar10) = *(undefined1 *)(*param_1 + uVar10);
          }
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(9,lVar7);
      }
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      if (uVar8 <= uVar4) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)(lVar9 + (ulong)*(uint *)(param_1 + 1));
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    }
  }
  else {
    pbVar5 = (byte *)FUN__text__0051be50(param_1,iVar6);
  }
  if (pbVar5 == (byte *)0x0) {
    return (byte *)0x0;
  }
  *pbVar5 = param_2;
  return pbVar5;
}


