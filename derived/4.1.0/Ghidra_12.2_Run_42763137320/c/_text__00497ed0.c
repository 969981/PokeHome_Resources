/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497ed0; name: FUN_.text__00497ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00497ed0(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  undefined1 auStack_68 [8];
  
  uVar8 = *(ushort *)*param_1;
  *param_1 = (long)((ushort *)*param_1 + 1);
  if (uVar8 != 0) {
    plVar1 = (long *)(param_3 + 0x20);
    uVar16 = (uint)uVar8;
    if (*(uint *)(param_3 + 0x2c) < (uint)uVar8) {
      if (*(long *)(param_3 + 0x20) == 0) {
        uVar15 = *(uint *)(param_3 + 0x28);
        lVar10 = FUN__text__00400f80(0,(ulong)uVar8 << 3);
        if (lVar10 == 0) {
          return 0x34;
        }
        lVar12 = *plVar1;
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
                *(undefined8 *)(lVar10 + lVar12) = *(undefined8 *)(*plVar1 + lVar12);
                ((undefined8 *)(lVar10 + lVar12))[1] = *(undefined8 *)(*plVar1 + lVar12 + 8);
              } while (((ulong)uVar15 & 0xfffffffe) != uVar13);
            }
            if ((uVar15 & 1) != 0) {
              *(undefined8 *)(lVar10 + uVar13 * 8) = *(undefined8 *)(*plVar1 + uVar13 * 8);
            }
            lVar12 = *plVar1;
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
      *(long *)(param_3 + 0x20) = lVar10;
      *(uint *)(param_3 + 0x2c) = uVar16;
    }
    uVar15 = 0;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    do {
      puVar14 = (undefined4 *)*param_1;
      uVar3 = *puVar14;
      *param_1 = (long)(puVar14 + 1);
      uVar5 = *(undefined1 *)(puVar14 + 1);
      *param_1 = (long)puVar14 + 5;
      cVar6 = *(char *)((long)puVar14 + 5);
      *param_1 = (long)puVar14 + 6;
      bVar7 = *(byte *)((long)puVar14 + 6);
      *param_1 = (long)puVar14 + 7;
      uVar2 = bVar7 & 0x7f;
      pbVar9 = (byte *)((long)puVar14 + 7);
      while ((char)bVar7 < '\0') {
        bVar7 = *pbVar9;
        *param_1 = (long)(pbVar9 + 1);
        uVar2 = bVar7 & 0x7f | uVar2 << 7;
        pbVar9 = pbVar9 + 1;
      }
      uVar4 = *(undefined4 *)pbVar9;
      *param_1 = (long)(pbVar9 + 4);
      bVar7 = pbVar9[4];
      *param_1 = (long)(pbVar9 + 5);
      uVar8 = *(ushort *)(pbVar9 + 5);
      *param_1 = (long)(pbVar9 + 7);
      cVar17 = '\x05';
      if (*_DAT_008a45a8 != 1) {
        cVar17 = '\x02';
      }
      if (cVar6 != '\x06') {
        cVar17 = cVar6;
      }
      uVar11 = FUN__text__004324b0(plVar1,2,*(undefined4 *)(param_3 + 0x10),uVar3,uVar5,cVar17,uVar2
                                   ,uVar4,bVar7,pbVar9 + 7,uVar8,auStack_68);
      if ((int)uVar11 != 1) {
        return uVar11;
      }
      uVar15 = uVar15 + 1;
      lVar10 = (ulong)uVar8 * 0xc;
      *param_1 = *param_1 + lVar10;
      *param_2 = *param_2 - (int)lVar10;
    } while (uVar15 != uVar16);
  }
  return 1;
}


