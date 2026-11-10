/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040be90; name: FUN_.text__0040be90
 */


undefined8 FUN__text__0040be90(uint param_1,long param_2,long *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  size_t sVar8;
  void *__dest;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [16];
  
  *param_4 = 0;
  puVar7 = (undefined4 *)FUN__text__00400f80(0,param_1 << 5 | 8);
  *param_3 = (long)puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    uVar9 = 0x34;
  }
  else {
    uVar9 = 1;
    *puVar7 = 1;
    *(uint *)(*param_3 + 4) = param_1;
    if (param_1 != 0) {
      lVar14 = 0;
      uVar13 = 0;
      uVar9 = 0x34;
      do {
        puVar1 = (undefined8 *)(param_2 + 8 + lVar14);
        lVar2 = *param_3 + lVar14;
        uVar3 = puVar1[-1];
        uVar4 = *puVar1;
        uVar5 = puVar1[2];
        *(undefined8 *)(lVar2 + 0x18) = puVar1[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar5;
        *(undefined8 *)(lVar2 + 8) = uVar3;
        *(undefined8 *)(lVar2 + 0x10) = uVar4;
        if ((char *)*puVar1 == (char *)0x0) {
          if (*(long *)(lVar2 + 0x18) != 0) {
            if (*(int *)(lVar2 + 0x20) == 0) {
              uVar9 = 0x1f;
              *param_4 = 0x61;
              goto LAB__text__0040bfd0;
            }
            iVar6 = FUN__text__004aed30(*(long *)(lVar2 + 0x18),*(int *)(lVar2 + 0x20),auStack_70,0,
                                        auStack_74,auStack_78,auStack_7c,auStack_80,0,0,0);
            if (iVar6 != 1) {
              *param_4 = 0x10;
            }
          }
        }
        else {
          sVar8 = strlen((char *)*puVar1);
          uVar11 = (ulong)((int)sVar8 + 1);
          __dest = (void *)FUN__text__00400f80(0,uVar11);
          *(void **)(lVar2 + 0x10) = __dest;
          if (__dest == (void *)0x0) {
LAB__text__0040bfd0:
            *(int *)(*param_3 + 4) = (int)uVar13;
            piVar10 = (int *)*param_3;
            iVar6 = *piVar10;
            *piVar10 = iVar6 + -1;
            if (iVar6 + -1 == 0) {
              uVar13 = (ulong)(uint)piVar10[1];
              if (piVar10[1] != 0) {
                uVar11 = 0;
                plVar12 = (long *)(piVar10 + 4);
                do {
                  if (*plVar12 != 0) {
                    FUN__text__00400fc0(0);
                    uVar13 = (ulong)(uint)piVar10[1];
                  }
                  uVar11 = uVar11 + 1;
                  plVar12 = plVar12 + 4;
                } while (uVar11 < uVar13);
              }
              FUN__text__00400fc0(0,piVar10);
            }
            *param_3 = 0;
            return uVar9;
          }
          memcpy(__dest,*(void **)(param_2 + 8 + lVar14),uVar11);
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x20;
      } while (param_1 != uVar13);
      uVar9 = 1;
    }
  }
  return uVar9;
}


