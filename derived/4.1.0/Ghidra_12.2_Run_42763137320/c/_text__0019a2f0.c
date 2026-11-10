/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a2f0; name: FUN_.text__0019a2f0
 */


void FUN__text__0019a2f0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                        undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 local_70;
  undefined4 uStack_69;
  
  uVar5 = 0;
  puVar1 = param_3 + 4;
  lVar9 = *(long *)(*param_2 + 0x60);
  uVar24 = 1;
  *(undefined4 *)(lVar9 + 0x140) = param_4;
  *(undefined4 *)(lVar9 + 0x144) = param_5;
  do {
    iVar23 = (int)uVar24;
    uVar25 = (ulong)(iVar23 - 1);
    lVar10 = *(long *)(*param_2 + 0x60);
    lVar9 = lVar10 + uVar25 * 8;
    iVar2 = *(int *)(lVar9 + 0x140);
    iVar3 = *(int *)(lVar9 + 0x144);
    iVar17 = iVar3 - iVar2;
    if (iVar17 != 0 && iVar2 <= iVar3) {
      uVar12 = *(ulong *)(lVar10 + 0xf8);
      uVar16 = (ulong)iVar2;
      if (uVar12 <= uVar16) goto LAB__text__0019a604;
      if (iVar17 < 0) {
        iVar17 = iVar17 + 1;
      }
      iVar17 = iVar2 + (iVar17 >> 1);
      if ((uVar12 <= (ulong)(long)iVar17) || (uVar12 <= (ulong)(long)iVar3))
      goto LAB__text__0019a604;
      lVar9 = *(long *)(lVar10 + 0xf0);
      puVar18 = (undefined8 *)(lVar9 + (long)iVar2 * 0x1c);
      puVar21 = (undefined8 *)(lVar9 + (long)iVar17 * 0x1c);
      puVar20 = (undefined8 *)(lVar9 + (long)iVar3 * 0x1c);
      uVar12 = (*(code *)*param_3)(puVar1,puVar18,puVar21);
      if ((uVar12 & 1) == 0) {
        uVar12 = (*(code *)*param_3)(puVar1,puVar20,puVar21);
        if ((uVar12 & 1) == 0) {
          pcVar11 = (code *)*param_3;
          puVar21 = puVar18;
          puVar8 = puVar20;
          goto LAB__text__0019a464;
        }
      }
      else {
        uVar12 = (*(code *)*param_3)(puVar1,puVar21,puVar20);
        if ((uVar12 & 1) == 0) {
          pcVar11 = (code *)*param_3;
          puVar21 = puVar20;
          puVar8 = puVar18;
LAB__text__0019a464:
          uVar12 = (*pcVar11)(puVar1,puVar21,puVar8);
          puVar21 = puVar18;
          if ((uVar12 & 1) == 0) {
            puVar21 = puVar20;
          }
        }
      }
      local_a0 = *puVar21;
      local_98 = puVar21[1];
      uStack_90 = puVar21[2];
      local_88 = *(undefined4 *)(puVar21 + 3);
      lVar9 = *(long *)(*param_2 + 0x60);
      if (*(ulong *)(lVar9 + 0xf8) <= uVar16) {
LAB__text__0019a604:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar17 = iVar2;
      iVar19 = iVar3;
      while( true ) {
        uVar12 = (long)iVar17;
        while( true ) {
          uVar6 = (*(code *)*param_3)(puVar1,*(long *)(lVar9 + 0xf0) + uVar16 * 0x1c,&local_a0);
          lVar9 = *(long *)(*param_2 + 0x60);
          if ((uVar6 & 1) == 0) break;
          uVar16 = uVar12 + 1;
          uVar12 = uVar16;
          if (*(ulong *)(lVar9 + 0xf8) <= uVar16) goto LAB__text__0019a604;
        }
        uVar6 = (ulong)iVar19;
        if (*(ulong *)(lVar9 + 0xf8) <= uVar6) goto LAB__text__0019a604;
        uVar22 = uVar6 * 0x1c | 1;
        while (uVar7 = (*(code *)*param_3)(puVar1,&local_a0,*(long *)(lVar9 + 0xf0) + uVar22 + -1),
              (uVar7 & 1) != 0) {
          uVar6 = uVar6 - 1;
          uVar22 = uVar22 - 0x1c;
          lVar9 = *(long *)(*param_2 + 0x60);
          if (*(ulong *)(lVar9 + 0xf8) <= uVar6) goto LAB__text__0019a604;
        }
        iVar17 = (int)uVar12;
        iVar19 = (int)uVar6;
        lVar9 = *(long *)(*param_2 + 0x60);
        if (iVar19 <= iVar17) break;
        if (*(ulong *)(lVar9 + 0xf8) <= uVar16) goto LAB__text__0019a604;
        puVar21 = (undefined8 *)(*(long *)(lVar9 + 0xf0) + uVar16 * 0x1c);
        local_80 = *(undefined8 *)((long)puVar21 + 1);
        uStack_78 = *(undefined8 *)((long)puVar21 + 9);
        uVar4 = *(undefined1 *)puVar21;
        uStack_69 = *(undefined4 *)(puVar21 + 3);
        local_70 = (undefined7)*(undefined8 *)((long)puVar21 + 0x11);
        if (*(ulong *)(lVar9 + 0xf8) <= uVar6) goto LAB__text__0019a604;
        lVar9 = *(long *)(lVar9 + 0xf0) + uVar22;
        uVar13 = *(undefined8 *)(lVar9 + -1);
        uVar14 = *(undefined8 *)(lVar9 + 7);
        uVar15 = *(undefined8 *)(lVar9 + 0xf);
        *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(lVar9 + 0x17);
        puVar21[1] = uVar14;
        puVar21[2] = uVar15;
        *puVar21 = uVar13;
        if (*(ulong *)(*(long *)(*param_2 + 0x60) + 0xf8) <= uVar6) goto LAB__text__0019a604;
        iVar19 = iVar19 + -1;
        puVar21 = (undefined8 *)(*(long *)(*(long *)(*param_2 + 0x60) + 0xf0) + uVar22);
        *(undefined1 *)((long)puVar21 + -1) = uVar4;
        *puVar21 = local_80;
        puVar21[1] = uStack_78;
        puVar21[2] = CONCAT17((undefined1)uStack_69,local_70);
        *(undefined4 *)((long)puVar21 + 0x17) = uStack_69;
        iVar17 = iVar17 + 1;
        uVar16 = (ulong)iVar17;
        lVar9 = *(long *)(*param_2 + 0x60);
        if (*(ulong *)(lVar9 + 0xf8) <= uVar16) goto LAB__text__0019a604;
      }
      lVar9 = lVar9 + uVar25 * 8;
      *(int *)(lVar9 + 0x144) = iVar17 + -1;
      *(int *)(lVar9 + 0x140) = iVar2;
      if (uVar5 <= iVar23 + 1U) {
        uVar5 = iVar23 + 1;
      }
      lVar9 = *(long *)(*param_2 + 0x60) + uVar24 * 8;
      *(int *)(lVar9 + 0x140) = iVar19 + 1;
      *(int *)(lVar9 + 0x144) = iVar3;
      uVar25 = (ulong)(iVar23 + 1U);
    }
    uVar24 = uVar25;
    if ((int)uVar24 == 0) {
      return;
    }
  } while( true );
}


