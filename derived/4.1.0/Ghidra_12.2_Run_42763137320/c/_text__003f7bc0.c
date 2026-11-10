/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f7bc0; name: FUN_.text__003f7bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f7bc0(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  int aiStack_a0 [3];
  char local_94 [4];
  long local_90 [2];
  undefined4 local_7c;
  long local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  uVar5 = FUN__text__003fe16c();
  uVar4 = *(uint *)(param_1 + 8) - uVar5;
  if (*(uint *)(param_1 + 8) < uVar5 || uVar4 == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x288));
    FUN__text__003fa190(param_1,param_1 + 0x278);
    FUN__text__003fa190(param_1,param_1 + 0x280);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
    return;
  }
  uVar11 = (ulong)uVar4 * 0x18 + 0xf & 0x3ffffffff0;
  lVar13 = -uVar11;
  lVar18 = (long)aiStack_a0 + lVar13;
  puVar17 = (undefined1 *)(lVar18 - uVar11);
  uVar5 = 0;
  local_7c = 0;
  local_68 = 0;
  local_78 = lVar18;
  local_70 = puVar17;
  do {
    if ((uVar4 <= uVar5) ||
       (plVar7 = (long *)FUN__text__003fa520(param_1,&local_7c), plVar7 == (long *)0x0)) break;
    iVar6 = FUN__text__003fadb8();
    if (iVar6 == 1) {
      lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,local_90 + 1,local_90,local_94,0);
      if (lVar8 == 0) {
        if (*(char *)((long)plVar7 + 0x6b) != '\0') {
          nn::os::LockMutex((MutexType *)(plVar7 + 5));
          cVar3 = *(char *)((long)plVar7 + 0x6c);
          nn::os::UnlockMutex((MutexType *)(plVar7 + 5));
          if (cVar3 != '\0') {
            FUN__text__003fe0e8(param_1);
            iVar6 = 5;
            goto LAB__text__003f7c48;
          }
        }
        lVar12 = *plVar7;
        lVar8 = 0;
        uVar15 = 0x35;
LAB__text__003f7d64:
        (**(code **)(lVar12 + 0x30))(plVar7,lVar8,uVar15,0);
        goto LAB__text__003f7c44;
      }
      if (local_90[0] == 0) {
        if (local_94[0] != '\0') goto LAB__text__003f7c44;
        lVar12 = *plVar7;
        uVar15 = 1;
        goto LAB__text__003f7d64;
      }
      if ((*(byte *)(local_90[0] + 0x48) >> 1 & 1) == 0) {
        *(byte *)(local_90[0] + 0x48) = *(byte *)(local_90[0] + 0x48) | 2;
        iVar6 = 0;
        uVar5 = uVar5 + 1;
        puVar16 = (uint *)((ulong)&local_68 | (ulong)*(byte *)((long)plVar7 + 0x66) << 2);
        uVar1 = *puVar16;
        puVar14 = (undefined8 *)
                  (local_90[(ulong)*(byte *)((long)plVar7 + 0x66) + 3] + (ulong)uVar1 * 0x18);
        *puVar16 = uVar1 + 1;
        *puVar14 = local_90[1];
        uVar2 = *(undefined1 *)((long)plVar7 + 100);
        puVar14[2] = local_90[0] + 8;
        *(undefined1 *)((long)puVar14 + 0xc) = uVar2;
        *(undefined4 *)(puVar14 + 1) = local_7c;
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x18))(plVar7);
LAB__text__003f7c44:
      iVar6 = 4;
    }
LAB__text__003f7c48:
  } while (iVar6 != 5);
  if (uVar5 != 0) {
    plVar7 = *(long **)(param_1 + 0x610);
    uVar11 = local_68 & 0xffffffff;
    piVar10 = (int *)puVar17;
    if ((int)local_68 != 0) {
      uVar21 = uVar11 * 4 + 0xf & 0x7fffffff0;
      piVar19 = (int *)(puVar17 + -uVar21);
      iVar6 = (**(code **)(*plVar7 + 0x30))
                        (plVar7,local_68 & 0xffffffff,lVar18,_DAT_008a4408,piVar19);
      piVar10 = piVar19;
      if (iVar6 != 1) {
        piVar10 = (int *)((long)piVar19 + (-(uVar11 * 8 + 0xf & 0xffffffff0) - uVar21));
        uVar9 = 0;
        puVar14 = (undefined8 *)((long)local_90 + lVar13);
        piVar20 = piVar19;
        do {
          if (*piVar20 != 1) {
            uVar15 = *puVar14;
            *(int *)((long)piVar19 + (uVar9 * 4 - uVar21)) = *piVar20;
            *(undefined8 *)((long)piVar10 + uVar9 * 8) = uVar15;
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          puVar14 = puVar14 + 3;
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 1;
        } while (uVar11 != 0);
        if ((int)uVar9 != 0) {
          FUN__text__003ffad0();
        }
      }
    }
    uVar11 = (ulong)local_68._4_4_;
    if (local_68._4_4_ != 0) {
      uVar21 = uVar11 * 4 + 0xf & 0x7fffffff0;
      piVar10 = (int *)((long)piVar10 - uVar21);
      iVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,local_68._4_4_,puVar17,_DAT_008a4408,piVar10);
      if (iVar6 != 1) {
        lVar13 = uVar11 * 8;
        uVar9 = 0;
        puVar14 = (undefined8 *)(puVar17 + 0x10);
        piVar19 = piVar10;
        do {
          if (*piVar19 != 1) {
            uVar15 = *puVar14;
            *(int *)((long)piVar10 + (uVar9 * 4 - uVar21)) = *piVar19;
            *(undefined8 *)((long)piVar10 + uVar9 * 8 + (-(lVar13 + 0xfU & 0xffffffff0) - uVar21)) =
                 uVar15;
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          uVar11 = uVar11 - 1;
          puVar14 = puVar14 + 3;
          piVar19 = piVar19 + 1;
        } while (uVar11 != 0);
        if ((int)uVar9 != 0) {
          FUN__text__003ffad0();
        }
      }
    }
  }
  return;
}


