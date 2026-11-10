/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042a310; name: FUN_.text__0042a310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0042a310(long *param_1,int *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  byte *pbVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  
  uVar7 = *(ushort *)*param_1;
  *param_1 = (long)((ushort *)*param_1 + 1);
  if (uVar7 != 0) {
    uVar16 = (uint)uVar7;
    if (*(uint *)(param_3 + 0x5c) < (uint)uVar7) {
      if (*(long *)(param_3 + 0x50) == 0) {
        uVar15 = *(uint *)(param_3 + 0x58);
        lVar10 = FUN__text__00400f80(0,(ulong)uVar7 << 3);
        if (lVar10 == 0) {
          return 0x34;
        }
        lVar12 = *(long *)(param_3 + 0x50);
        if ((lVar12 != 0) && (lVar12 != lVar10)) {
          if (uVar15 != 0) {
            if (uVar15 == 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                lVar12 = uVar13 * 8;
                uVar13 = uVar13 + 2;
                *(undefined8 *)(lVar10 + lVar12) =
                     *(undefined8 *)(*(long *)(param_3 + 0x50) + lVar12);
                ((undefined8 *)(lVar10 + lVar12))[1] =
                     *(undefined8 *)(*(long *)(param_3 + 0x50) + lVar12 + 8);
              } while (((ulong)uVar15 & 0xfffffffe) != uVar13);
            }
            if ((uVar15 & 1) != 0) {
              *(undefined8 *)(lVar10 + uVar13 * 8) =
                   *(undefined8 *)(*(long *)(param_3 + 0x50) + uVar13 * 8);
            }
            lVar12 = *(long *)(param_3 + 0x50);
          }
          FUN__text__00400fc0(0,lVar12);
        }
      }
      else {
        lVar10 = FUN__text__00400fa0(0);
        if (lVar10 == 0) {
          return 0x34;
        }
      }
      *(long *)(param_3 + 0x50) = lVar10;
      *(uint *)(param_3 + 0x5c) = uVar16;
    }
    piVar9 = _DAT_008a45a8;
    uVar15 = 0;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    do {
      puVar14 = (undefined4 *)*param_1;
      uVar2 = *puVar14;
      *param_1 = (long)(puVar14 + 1);
      uVar4 = *(undefined1 *)(puVar14 + 1);
      *param_1 = (long)puVar14 + 5;
      cVar5 = *(char *)((long)puVar14 + 5);
      *param_1 = (long)puVar14 + 6;
      bVar6 = *(byte *)((long)puVar14 + 6);
      *param_1 = (long)puVar14 + 7;
      uVar1 = bVar6 & 0x7f;
      pbVar8 = (byte *)((long)puVar14 + 7);
      while ((char)bVar6 < '\0') {
        bVar6 = *pbVar8;
        *param_1 = (long)(pbVar8 + 1);
        uVar1 = bVar6 & 0x7f | uVar1 << 7;
        pbVar8 = pbVar8 + 1;
      }
      uVar3 = *(undefined4 *)pbVar8;
      *param_1 = (long)(pbVar8 + 4);
      bVar6 = pbVar8[4];
      *param_1 = (long)(pbVar8 + 5);
      uVar7 = *(ushort *)(pbVar8 + 5);
      *param_1 = (long)(pbVar8 + 7);
      cVar17 = '\x05';
      if (*piVar9 != 1) {
        cVar17 = '\x02';
      }
      if (cVar5 != '\x06') {
        cVar17 = cVar5;
      }
      uVar11 = FUN__text__0042a540(param_3,uVar2,uVar4,cVar17,uVar1,uVar3,bVar6,pbVar8 + 7,uVar7);
      if ((int)uVar11 != 1) {
        return uVar11;
      }
      uVar15 = uVar15 + 1;
      lVar10 = (ulong)uVar7 * 0xc;
      *param_1 = *param_1 + lVar10;
      *param_2 = *param_2 - (int)lVar10;
    } while (uVar15 != uVar16);
  }
  return 1;
}


