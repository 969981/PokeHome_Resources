/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bde88; name: FUN_.text__003bde88
 */


long FUN__text__003bde88(long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  ushort *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long local_58;
  long local_38;
  
  piVar13 = *(int **)(param_1 + 0x60);
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar14 == 0)) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)((long)piVar13 + uVar14);
  }
  FUN__text__003be3f8(&local_38,param_2);
  lVar2 = local_38;
  local_38 = 0;
  *(undefined8 *)(lVar2 + 0x60) = uVar28;
  local_58 = lVar2;
  (**(code **)(*param_3 + 0xd8))(param_3,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  piVar13 = *(int **)(param_1 + 0x60);
  puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
  if (*puVar16 < 7) {
    uVar28 = 0;
LAB__text__003bdf74:
    uVar15 = 0;
  }
  else {
    uVar28 = 0;
    if ((ulong)puVar16[3] != 0) {
      uVar28 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    }
    if ((*puVar16 < 9) || ((ulong)puVar16[4] == 0)) goto LAB__text__003bdf74;
    uVar15 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[4]);
  }
  *(undefined8 *)(lVar2 + 0x88) = uVar28;
  *(undefined8 *)(lVar2 + 0x90) = uVar15;
  piVar13 = *(int **)(param_1 + 0x60);
  puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
  uVar1 = *puVar16;
  if (uVar1 < 0xb) {
    uVar28 = 0;
LAB__text__003be060:
    uVar15 = 0;
LAB__text__003be064:
    uVar17 = 0;
LAB__text__003be068:
    uVar18 = 0;
LAB__text__003be06c:
    uVar19 = 0;
LAB__text__003be070:
    uVar20 = 0;
LAB__text__003be074:
    uVar21 = 0;
LAB__text__003be078:
    uVar22 = 0;
LAB__text__003be080:
    puVar8 = (uint *)((long)((long)piVar13 + (ulong)puVar16[0xe]) +
                     (ulong)*(uint *)((long)piVar13 + (ulong)puVar16[0xe]));
    uVar11 = *puVar8;
joined_r0x003be360:
    uVar23 = 0;
    if (uVar11 == 0) goto LAB__text__003be364;
LAB__text__003be098:
    piVar13 = (int *)((long)(puVar8 + 1) + (ulong)puVar8[1]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar24 = 0;
LAB__text__003be100:
      uVar25 = 0;
      if (1 < uVar11) goto LAB__text__003be10c;
LAB__text__003be0e0:
      uVar4 = 0;
      uVar3 = 0;
      goto LAB__text__003be384;
    }
    uVar24 = 0;
    if ((ulong)puVar16[2] != 0) {
      uVar24 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
    }
    if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto LAB__text__003be100;
    uVar25 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    if (uVar11 < 2) goto LAB__text__003be0e0;
LAB__text__003be10c:
    piVar13 = (int *)((long)(puVar8 + 2) + (ulong)puVar8[2]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar3 = 0;
LAB__text__003be16c:
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      if ((ulong)puVar16[2] != 0) {
        uVar3 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
      }
      if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto LAB__text__003be16c;
      uVar4 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    }
    if (uVar11 < 3) goto LAB__text__003be384;
    piVar13 = (int *)((long)(puVar8 + 3) + (ulong)puVar8[3]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar5 = 0;
joined_r0x003be1d0:
      uVar6 = 0;
      if (3 < uVar11) goto LAB__text__003be1d4;
LAB__text__003be224:
      uVar10 = 0;
      uVar7 = 0;
      goto LAB__text__003be38c;
    }
    uVar5 = 0;
    if ((ulong)puVar16[2] != 0) {
      uVar5 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
    }
    if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto joined_r0x003be1d0;
    uVar6 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    if (uVar11 < 4) goto LAB__text__003be224;
LAB__text__003be1d4:
    piVar13 = (int *)((long)(puVar8 + 4) + (ulong)puVar8[4]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar7 = 0;
LAB__text__003be23c:
      uVar10 = 0;
    }
    else {
      uVar7 = 0;
      if ((ulong)puVar16[2] != 0) {
        uVar7 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
      }
      if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto LAB__text__003be23c;
      uVar10 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    }
    if (uVar11 < 5) goto LAB__text__003be38c;
    piVar13 = (int *)((long)(puVar8 + 5) + (ulong)puVar8[5]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar26 = 0;
LAB__text__003be29c:
      uVar29 = 0;
    }
    else {
      uVar26 = 0;
      if ((ulong)puVar16[2] != 0) {
        uVar26 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
      }
      if (*puVar16 < 7) goto LAB__text__003be29c;
      uVar29 = 0;
      if ((ulong)puVar16[3] != 0) {
        uVar29 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
      }
    }
    if (uVar11 < 6) {
      uVar30 = 0;
      uVar27 = 0;
      goto LAB__text__003be394;
    }
    piVar13 = (int *)((long)(puVar8 + 6) + (ulong)puVar8[6]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) {
      uVar27 = 0;
LAB__text__003be2fc:
      uVar30 = 0;
    }
    else {
      uVar27 = 0;
      if ((ulong)puVar16[2] != 0) {
        uVar27 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
      }
      if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) goto LAB__text__003be2fc;
      uVar30 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
    }
    if (uVar11 < 7) goto LAB__text__003be394;
    piVar13 = (int *)((long)(puVar8 + 7) + (ulong)puVar8[7]);
    puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
    if (*puVar16 < 5) goto LAB__text__003be394;
    uVar9 = 0;
    if ((ulong)puVar16[2] != 0) {
      uVar9 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[2]);
    }
    if ((6 < *puVar16) && ((ulong)puVar16[3] != 0)) {
      uVar12 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[3]);
      goto LAB__text__003be39c;
    }
  }
  else {
    uVar28 = 0;
    if ((ulong)puVar16[5] != 0) {
      uVar28 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[5]);
    }
    if (uVar1 < 0xd) goto LAB__text__003be060;
    uVar15 = 0;
    if ((ulong)puVar16[6] != 0) {
      uVar15 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[6]);
    }
    if (uVar1 < 0xf) goto LAB__text__003be064;
    uVar17 = 0;
    if ((ulong)puVar16[7] != 0) {
      uVar17 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[7]);
    }
    if (uVar1 < 0x11) goto LAB__text__003be068;
    uVar18 = 0;
    if ((ulong)puVar16[8] != 0) {
      uVar18 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[8]);
    }
    if (uVar1 < 0x13) goto LAB__text__003be06c;
    uVar19 = 0;
    if ((ulong)puVar16[9] != 0) {
      uVar19 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[9]);
    }
    if (uVar1 < 0x15) goto LAB__text__003be070;
    uVar20 = 0;
    if ((ulong)puVar16[10] != 0) {
      uVar20 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[10]);
    }
    if (uVar1 < 0x17) goto LAB__text__003be074;
    uVar21 = 0;
    if ((ulong)puVar16[0xb] != 0) {
      uVar21 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[0xb]);
    }
    if (uVar1 < 0x19) goto LAB__text__003be078;
    uVar22 = 0;
    if ((ulong)puVar16[0xc] != 0) {
      uVar22 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[0xc]);
    }
    if (uVar1 < 0x1b) {
      puVar8 = (uint *)((long)((long)piVar13 + (ulong)puVar16[0xe]) +
                       (ulong)*(uint *)((long)piVar13 + (ulong)puVar16[0xe]));
      uVar11 = *puVar8;
      goto joined_r0x003be360;
    }
    if ((ulong)puVar16[0xd] == 0) goto LAB__text__003be080;
    uVar23 = *(undefined8 *)((long)piVar13 + (ulong)puVar16[0xd]);
    puVar8 = (uint *)((long)((long)piVar13 + (ulong)puVar16[0xe]) +
                     (ulong)*(uint *)((long)piVar13 + (ulong)puVar16[0xe]));
    uVar11 = *puVar8;
    if (uVar11 != 0) goto LAB__text__003be098;
LAB__text__003be364:
    uVar4 = 0;
    uVar3 = 0;
    uVar24 = 0;
    uVar25 = 0;
LAB__text__003be384:
    uVar10 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
LAB__text__003be38c:
    uVar30 = 0;
    uVar27 = 0;
    uVar26 = 0;
    uVar29 = 0;
LAB__text__003be394:
    uVar9 = 0;
  }
  uVar12 = 0;
LAB__text__003be39c:
  *(undefined8 *)(lVar2 + 0xa8) = uVar24;
  *(undefined8 *)(lVar2 + 0xb0) = uVar25;
  *(undefined8 *)(lVar2 + 0x158) = uVar23;
  *(undefined8 *)(lVar2 + 0xb8) = uVar3;
  *(undefined8 *)(lVar2 + 0xc0) = uVar4;
  *(undefined8 *)(lVar2 + 200) = uVar5;
  *(undefined8 *)(lVar2 + 0xd0) = uVar6;
  *(undefined8 *)(lVar2 + 0xd8) = uVar7;
  *(undefined8 *)(lVar2 + 0xe0) = uVar10;
  *(undefined8 *)(lVar2 + 0xe8) = uVar26;
  *(undefined8 *)(lVar2 + 0xf0) = uVar29;
  *(undefined8 *)(lVar2 + 0xf8) = uVar27;
  *(undefined8 *)(lVar2 + 0x100) = uVar30;
  *(undefined8 *)(lVar2 + 0x108) = uVar9;
  *(undefined8 *)(lVar2 + 0x110) = uVar12;
  *(undefined8 *)(lVar2 + 0x118) = uVar28;
  *(undefined8 *)(lVar2 + 0x120) = uVar15;
  *(undefined8 *)(lVar2 + 0x128) = uVar17;
  *(undefined8 *)(lVar2 + 0x130) = uVar18;
  *(undefined8 *)(lVar2 + 0x138) = uVar19;
  *(undefined8 *)(lVar2 + 0x140) = uVar20;
  *(undefined8 *)(lVar2 + 0x148) = uVar21;
  *(undefined8 *)(lVar2 + 0x150) = uVar22;
  return lVar2;
}


