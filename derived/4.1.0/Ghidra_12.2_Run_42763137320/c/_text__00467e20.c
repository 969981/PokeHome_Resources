/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467e20; name: FUN_.text__00467e20
 */


undefined4 FUN__text__00467e20(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  bVar3 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar11 = 0;
  if ((bVar3 & 1) != 0) {
    uVar11 = 0x20020000ffe;
  }
  *(ulong *)(param_1 + 0x98) = uVar11 | *(ulong *)(param_1 + 0x98) & 0xfffffdffdffff001;
  uVar2 = *(uint *)(param_1 + 0xd2);
  uVar1 = uVar2 & 0x7ffff | ((bVar3 & 2) >> 1) << 0x13;
  *(uint *)(param_1 + 0xd2) = uVar2 & 0xfff00000 | uVar1;
  if ((bVar3 & 1) == 0) {
    return 1;
  }
  *(uint *)(param_1 + 0xd2) = uVar2 & 0xff800000 | uVar1 | (bVar3 >> 2 & 3) << 0x14;
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) & 0xfff8 | bVar3 >> 5 & 3;
  if ((bVar3 & 2) == 0) {
    return 1;
  }
  bVar3 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar5 = *(ushort *)(param_1 + 0xd0);
  *(ushort *)(param_1 + 0xd0) =
       (ushort)((bVar3 & 0x80) << 2) | (bVar3 >> 5 & 1) << 8 |
       uVar5 & 0xfc07 | (ushort)((bVar3 & 0x1b) << 3);
  if (1 < (uVar5 & 7) - 1) {
    return 1;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  if (puVar10 == (undefined8 *)0x0) {
    *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) | 0x20020000ffe;
    puVar10 = (undefined8 *)FUN__text__00400f80(2,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar10[7] = 0;
    puVar10[8] = 0;
    *puVar10 = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    FUN__text__0047b420();
    *(undefined4 *)(puVar10 + 7) = 0;
    puVar10[8] = 0;
    *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x68) = puVar10;
  }
  bVar4 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  *(uint *)(puVar10 + 2) = (uint)bVar4;
  *(uint *)(puVar10 + 6) = (bVar3 & 0x40) << 0x19 | *(uint *)(puVar10 + 6) & 0x7fffffff;
  uVar6 = *(undefined4 *)*param_2;
  *param_2 = (long)((undefined4 *)*param_2 + 1);
  *(undefined4 *)((long)puVar10 + 0x14) = uVar6;
  puVar8 = (uint *)*param_2;
  puVar12 = puVar8 + 1;
  uVar1 = *puVar8;
  *param_2 = (long)puVar12;
  if (uVar1 == 0) {
    uVar1 = puVar8[1];
    uVar11 = (ulong)uVar1;
    *param_2 = (long)(puVar8 + 2);
    if (uVar1 == 0) {
      return 1;
    }
    uVar6 = 1;
    *param_2 = (long)(puVar8 + 2 + uVar11 * 2);
    goto LAB__text__004680b4;
  }
  puVar8 = puVar12 + (ulong)uVar1 * 4;
  *param_2 = (long)puVar8;
  puVar13 = puVar8 + 1;
  uVar2 = *puVar8;
  uVar11 = (ulong)uVar2;
  *param_2 = (long)puVar13;
  if (uVar2 == 0) {
    return 1;
  }
  *param_2 = (long)(puVar13 + uVar11 * 2);
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  if (puVar10 == (undefined8 *)0x0) {
    *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) | 0x20020000ffe;
    puVar10 = (undefined8 *)FUN__text__00400f80(2,0x48);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[7] = 0;
      puVar10[8] = 0;
      *puVar10 = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      FUN__text__0047b420();
      *(undefined4 *)(puVar10 + 7) = 0;
      puVar10[8] = 0;
      *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x68) = puVar10;
      goto LAB__text__00468074;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    if (puVar10 != (undefined8 *)0x0) goto LAB__text__00468074;
  }
  else {
LAB__text__00468074:
    uVar7 = FUN__text__0047b4d0(puVar10,puVar12,uVar1,puVar13,uVar2);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN__text__0047b720(*(undefined8 *)(param_1 + 0x68),puVar12,(ulong)uVar1,puVar13,
                                  uVar11);
      goto LAB__text__004680b4;
    }
  }
  uVar6 = 1;
LAB__text__004680b4:
  lVar14 = 0;
  uVar7 = 0;
  do {
    puVar9 = (undefined4 *)*param_2;
    uVar17 = *puVar9;
    *param_2 = (long)(puVar9 + 1);
    uVar16 = puVar9[1];
    *param_2 = (long)(puVar9 + 2);
    uVar15 = puVar9[2];
    *param_2 = (long)(puVar9 + 3);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    if (puVar10 == (undefined8 *)0x0) {
      *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) | 0x20020000ffe;
      puVar10 = (undefined8 *)FUN__text__00400f80(2,0x48);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[7] = 0;
        puVar10[8] = 0;
        *puVar10 = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        FUN__text__0047b420();
        *(undefined4 *)(puVar10 + 7) = 0;
        puVar10[8] = 0;
        *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0x20);
        *(undefined8 **)(param_1 + 0x68) = puVar10;
        goto LAB__text__00468170;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x68);
      if (puVar10 != (undefined8 *)0x0) goto LAB__text__00468170;
    }
    else {
LAB__text__00468170:
      if (uVar7 < ((ulong)*(uint *)(puVar10 + 6) & 0x7fffffff)) {
        *(undefined4 *)(puVar10[5] + lVar14 + 0xc) = uVar17;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x28) + lVar14 + 0x10) = uVar16;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x28) + lVar14 + 0x14) = uVar15;
      }
    }
    uVar7 = uVar7 + 1;
    lVar14 = lVar14 + 0x18;
    if (uVar11 == uVar7) {
      return uVar6;
    }
  } while( true );
}


