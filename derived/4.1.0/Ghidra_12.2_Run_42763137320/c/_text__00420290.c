/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00420290; name: FUN_.text__00420290
 */


void FUN__text__00420290(long *param_1,long *param_2,undefined8 *param_3,long param_4,long param_5,
                        ushort param_6)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long alStack_430 [128];
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar10 = (ulong)bVar3;
  bVar4 = *(byte *)(param_2 + 1);
  uVar15 = (ulong)((uint)bVar3 * 8 + 0xf) & 0xff0;
  plVar6 = (long *)((long)alStack_430 + (0x400 - uVar15));
  puVar7 = (undefined8 *)((long)plVar6 - uVar15);
  plVar8 = (long *)((long)puVar7 - uVar15);
  plVar9 = (long *)((long)plVar8 - uVar15);
  if (bVar3 != 0) {
    uVar5 = *(ushort *)(param_1 + 2);
    lVar16 = 0;
    lVar14 = *param_1;
    uVar13 = *param_3;
    plVar17 = plVar9;
    do {
      lVar1 = param_4 + lVar16;
      lVar2 = param_5 + lVar16;
      lVar16 = lVar16 + ((ulong)((uint)bVar4 * 4 + 0xc) & 0x7f0);
      *plVar6 = lVar14;
      lVar14 = lVar14 + (ulong)uVar5 * 4;
      uVar10 = uVar10 - 1;
      *puVar7 = uVar13;
      *plVar8 = lVar1;
      *plVar17 = lVar2;
      plVar6 = plVar6 + 1;
      plVar17 = plVar17 + 1;
      plVar8 = plVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar10 != 0);
  }
  uVar10 = (ulong)((uint)bVar4 * 8 + 0xf) & 0xff0;
  uVar11 = (uint)bVar4;
  if (uVar11 != 0) {
    lVar16 = *param_2;
    uVar12 = (ulong)*(ushort *)(param_2 + 2);
    uVar15 = 0;
    if (uVar11 != 1) {
      lVar14 = lVar16;
      do {
        plVar6 = (long *)((long)plVar9 + (uVar15 * 8 - uVar10));
        uVar15 = uVar15 + 2;
        *plVar6 = lVar14;
        plVar6[1] = lVar14 + uVar12 * 4;
        lVar14 = lVar14 + uVar12 * 8;
      } while (((ulong)uVar11 & 0xfe) != uVar15);
    }
    if ((bVar4 & 1) != 0) {
      *(ulong *)((long)plVar9 + (uVar15 * 8 - uVar10)) = lVar16 + uVar15 * uVar12 * 4;
    }
  }
  FUN__text__00420400();
  if (param_6 <= *(ushort *)((long)param_2 + 0x12)) {
    param_6 = *(ushort *)((long)param_2 + 0x12);
  }
  *(ushort *)((long)param_2 + 0x12) = param_6;
  return;
}


