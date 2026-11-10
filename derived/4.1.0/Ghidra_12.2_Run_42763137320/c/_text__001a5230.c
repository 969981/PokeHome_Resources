/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5230; name: FUN_.text__001a5230
 */


int FUN__text__001a5230(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_94;
  long local_90;
  long local_88;
  uint local_7c;
  uint uStack_78;
  undefined1 auStack_74 [20];
  
  *(undefined8 *)(param_1 + 0x6a) = 0;
  uVar3 = *(uint *)(param_1 + 0x34);
  uVar4 = *(uint *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar8 = *param_2;
  uVar6 = (uint)uVar8;
  *(undefined8 *)(param_1 + 0x3c) = uVar8;
  uVar2 = uVar3;
  if (uVar6 <= uVar3) {
    uVar2 = uVar6;
  }
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  uVar7 = (uint)((ulong)uVar8 >> 0x20);
  uVar6 = uVar4;
  if (uVar7 <= uVar4) {
    uVar6 = uVar7;
  }
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar8 = *(undefined8 *)(lVar9 + 0x10);
  pcVar1 = (char *)(param_1 + 0x20);
  lVar9 = *(long *)(lVar9 + 0x158);
  if (lVar9 == 0) {
    if (*pcVar1 == '\0') {
      uVar14 = 0;
      uVar7 = 0;
      local_94 = 0;
      uVar15 = 5;
      uVar10 = 4;
      do {
        uVar16 = uVar15;
        uVar11 = uVar10;
        uVar12 = uVar2;
        do {
          local_7c = uVar12;
          uStack_78 = uVar6;
          FUN__text__00191328(auStack_74,pcVar1,&local_7c);
          local_90 = 0;
          uVar5 = FUN__text__00194730(uVar8,&local_90,auStack_74);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          uVar15 = uVar16;
          uVar10 = uVar11;
          if ((uVar5 & 1) != 0) {
            uVar15 = uVar12;
            if (uVar16 <= uVar12) {
              uVar15 = uVar16;
            }
            uVar10 = uVar6;
            if (uVar11 <= uVar6) {
              uVar10 = uVar11;
            }
            if (uVar7 <= uVar12) {
              uVar7 = uVar12;
            }
            if (uVar14 <= uVar6) {
              uVar14 = uVar6;
            }
            *(undefined1 *)(param_1 + (ulong)uVar6 + (ulong)uVar12 + (ulong)uVar12 * 4 + 0x54) = 1;
            local_94 = local_94 + 1;
          }
          uVar12 = uVar12 + 1;
          uVar16 = uVar15;
          uVar11 = uVar10;
        } while (uVar12 <= uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
    else {
      uVar14 = 0;
      uVar7 = 0;
      local_94 = 0;
      uVar15 = 5;
      uVar10 = 4;
      do {
        uVar16 = uVar15;
        uVar11 = uVar10;
        uVar12 = uVar2;
        do {
          local_7c = uVar12;
          uStack_78 = uVar6;
          FUN__text__00191328(auStack_74,pcVar1,&local_7c);
          local_88 = 0;
          uVar5 = FUN__text__00194730(uVar8,&local_88,auStack_74);
          if (local_88 != 0) {
            (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
            local_88 = 0;
          }
          uVar15 = uVar16;
          uVar10 = uVar11;
          if ((uVar5 & 1) != 0) {
            uVar15 = uVar12;
            if (uVar16 <= uVar12) {
              uVar15 = uVar16;
            }
            uVar10 = uVar6;
            if (uVar11 <= uVar6) {
              uVar10 = uVar11;
            }
            if (uVar7 <= uVar12) {
              uVar7 = uVar12;
            }
            if (uVar14 <= uVar6) {
              uVar14 = uVar6;
            }
            *(undefined1 *)(param_1 + (ulong)uVar6 + (ulong)uVar12 + (ulong)uVar12 * 4 + 0x54) = 1;
            local_94 = local_94 + 1;
          }
          uVar12 = uVar12 + 1;
          uVar16 = uVar15;
          uVar11 = uVar10;
        } while (uVar12 <= uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
  }
  else {
    plVar13 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    if (*pcVar1 == '\0') {
      uVar14 = 0;
      uVar7 = 0;
      local_94 = 0;
      uVar15 = 5;
      uVar10 = 4;
      do {
        uVar16 = uVar15;
        uVar11 = uVar10;
        uVar12 = uVar2;
        do {
          local_7c = uVar12;
          uStack_78 = uVar6;
          FUN__text__00191328(auStack_74,pcVar1,&local_7c);
          local_90 = lVar9;
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar13);
          uVar5 = FUN__text__00194730(uVar8,&local_90,auStack_74);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          uVar15 = uVar16;
          uVar10 = uVar11;
          if ((uVar5 & 1) != 0) {
            uVar15 = uVar12;
            if (uVar16 <= uVar12) {
              uVar15 = uVar16;
            }
            uVar10 = uVar6;
            if (uVar11 <= uVar6) {
              uVar10 = uVar11;
            }
            if (uVar7 <= uVar12) {
              uVar7 = uVar12;
            }
            if (uVar14 <= uVar6) {
              uVar14 = uVar6;
            }
            *(undefined1 *)(param_1 + (ulong)uVar6 + (ulong)uVar12 + (ulong)uVar12 * 4 + 0x54) = 1;
            local_94 = local_94 + 1;
          }
          uVar12 = uVar12 + 1;
          uVar16 = uVar15;
          uVar11 = uVar10;
        } while (uVar12 <= uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
    else {
      uVar14 = 0;
      uVar7 = 0;
      local_94 = 0;
      uVar15 = 5;
      uVar10 = 4;
      do {
        uVar12 = uVar2;
        do {
          local_7c = uVar12;
          uStack_78 = uVar6;
          FUN__text__00191328(auStack_74,pcVar1,&local_7c);
          local_88 = lVar9;
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar13);
          uVar5 = FUN__text__00194730(uVar8,&local_88,auStack_74);
          if (local_88 != 0) {
            (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
            local_88 = 0;
          }
          if ((uVar5 & 1) != 0) {
            uVar16 = uVar12;
            if (uVar15 <= uVar12) {
              uVar16 = uVar15;
            }
            uVar11 = uVar6;
            if (uVar10 <= uVar6) {
              uVar11 = uVar10;
            }
            if (uVar7 <= uVar12) {
              uVar7 = uVar12;
            }
            if (uVar14 <= uVar6) {
              uVar14 = uVar6;
            }
            *(undefined1 *)(param_1 + (ulong)uVar6 + (ulong)uVar12 + (ulong)uVar12 * 4 + 0x54) = 1;
            local_94 = local_94 + 1;
            uVar15 = uVar16;
            uVar10 = uVar11;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 <= uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar4);
    }
  }
  if (local_94 == 0) {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x3c);
  }
  else {
    *(uint *)(param_1 + 0x44) = uVar15;
    *(uint *)(param_1 + 0x48) = uVar10;
    *(uint *)(param_1 + 0x4c) = uVar7;
    *(uint *)(param_1 + 0x50) = uVar14;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return local_94;
}


