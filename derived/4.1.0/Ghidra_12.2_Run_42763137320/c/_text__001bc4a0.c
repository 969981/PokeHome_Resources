/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bc4a0; name: FUN_.text__001bc4a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001bc4a0(long param_1,uint param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long local_d8;
  long local_d0;
  long local_c8 [3];
  long local_b0;
  long local_a8;
  undefined1 auStack_a0 [20];
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  long local_70 [2];
  
  lVar9 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar9 + 0x2d0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(param_1 + 0x18);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar18 = *(undefined8 *)(lVar15 + 0x10);
  lVar17 = *(long *)(lVar15 + 0x250);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar15 + 0x158);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar19 = *(long *)(lVar12 + 0x2e8);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  plVar1 = (long *)(lVar16 + 0x48);
  uVar20 = 0;
  plVar2 = (long *)(lVar17 + 0x48);
  pcVar3 = (char *)(param_1 + 0x5a80);
  do {
    uVar22 = 0;
    do {
      if (uVar20 == (param_4 & 0xffffffff) && uVar22 == (param_3 & 0xffffffff) ||
          ((param_2 ^ 1) & 1) != 0) {
        local_74 = 0xffffffff;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_7c = 0;
        local_c8[0] = CONCAT44((int)uVar20,(int)uVar22);
        FUN__text__00191328(auStack_a0,param_1 + 0x5a58,local_c8);
        local_a8 = lVar16;
        if (lVar16 != 0) {
          (**(code **)(*plVar1 + 0x10))();
        }
        uVar6 = FUN__text__00194730(uVar18,&local_a8,auStack_a0);
        if (local_a8 != 0) {
          (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
          local_a8 = 0;
        }
        if ((uVar6 & 1) == 0) {
          lVar12 = 0;
LAB__text__001bc984:
          cVar4 = *pcVar3;
        }
        else {
          local_b0 = lVar17;
          if (lVar17 != 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
          FUN__text__001916b0(uVar18,&local_b0,auStack_a0,1);
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
            local_b0 = 0;
          }
          if (lVar17 != 0) {
            (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))(plVar2);
            uVar6 = FUN__text__00306588(lVar17);
            lVar12 = lVar17;
            if ((uVar6 & 1) == 0) {
              FUN__text__00306a28(lVar17,&local_8c);
              plVar14 = (long *)0x0;
              lVar21 = param_1 + uVar22 * 1000 + uVar20 * 200;
              lVar10 = *(long *)(lVar21 + 0x1400);
              lVar13 = *(long *)(lVar21 + 0x1408);
              if ((lVar10 != -0x340d631b7bddd9bb) && (lVar10 != 0)) {
                local_c8[0] = lVar10;
                plVar14 = (long *)FUN__text__003c79c0(*(undefined8 *)(lVar9 + 0x2d0),local_c8);
                if (((*_DAT_0089fa70 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(_DAT_0089fa70), iVar5 != 0)) {
                  if (((*_DAT_0089f898 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(_DAT_0089f898), iVar5 != 0)) {
                    *_DAT_0089f8a0 = 0;
                    __cxa_guard_release(_DAT_0089f898);
                  }
                  *_DAT_0089fa78 = _DAT_0089f8a0;
                  __cxa_guard_release(_DAT_0089fa70);
                }
                if (plVar14 == (long *)0x0) {
LAB__text__001bc7a4:
                  plVar14 = (long *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
                  if (puVar7 != _DAT_0089fa78) {
                    do {
                      puVar7 = (undefined8 *)*puVar7;
                    } while (puVar7 != _DAT_0089fa78 && puVar7 != (undefined8 *)0x0);
                    if (puVar7 == (undefined8 *)0x0) goto LAB__text__001bc7a4;
                  }
                }
              }
              FUN__text__003c3378(lVar19,&local_8c,0,plVar14,0,0);
              plVar14 = (long *)0x0;
              if ((lVar13 != -0x340d631b7bddd9bb) && (lVar13 != 0)) {
                local_c8[0] = lVar13;
                plVar14 = (long *)FUN__text__003c79c0(*(undefined8 *)(lVar9 + 0x2d0),local_c8);
                if (((*_DAT_0089fa70 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(_DAT_0089fa70), iVar5 != 0)) {
                  if (((*_DAT_0089f898 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(_DAT_0089f898), iVar5 != 0)) {
                    *_DAT_0089f8a0 = 0;
                    __cxa_guard_release(_DAT_0089f898);
                  }
                  *_DAT_0089fa78 = _DAT_0089f8a0;
                  __cxa_guard_release(_DAT_0089fa70);
                }
                if (plVar14 == (long *)0x0) {
LAB__text__001bc844:
                  plVar14 = (long *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
                  if (puVar7 != _DAT_0089fa78) {
                    do {
                      puVar7 = (undefined8 *)*puVar7;
                    } while (puVar7 != _DAT_0089fa78 && puVar7 != (undefined8 *)0x0);
                    if (puVar7 == (undefined8 *)0x0) goto LAB__text__001bc844;
                  }
                }
              }
              FUN__text__003c3378(lVar19,&local_8c,0,plVar14,0,0);
              FUN__text__001beccc(lVar9 + 0x110,lVar15,auStack_a0,lVar21 + 0x13f0);
              uVar6 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x38));
              if (((uVar6 & 1) == 0) &&
                 (uVar6 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x38)), (uVar6 & 1) == 0)) {
                uVar8 = 0;
                lVar13 = param_1 + uVar22 * 1000 + uVar20 * 200;
                lVar10 = *(long *)(lVar13 + 0x42e0);
                lVar13 = *(long *)(lVar13 + 0x42e8);
                if ((lVar10 != -0x340d631b7bddd9bb) && (lVar10 != 0)) {
                  local_c8[0] = lVar10;
                  uVar8 = FUN__text__00155100(*(undefined8 *)(lVar9 + 0x2d0),local_c8);
                }
                FUN__text__003c3378(lVar19,&local_8c,0,uVar8,0,0);
                uVar8 = 0;
                if ((lVar13 != -0x340d631b7bddd9bb) && (lVar13 != 0)) {
                  local_c8[0] = lVar13;
                  uVar8 = FUN__text__00155100(*(undefined8 *)(lVar9 + 0x2d0),local_c8);
                }
                FUN__text__003c3378(lVar19,&local_8c,0,uVar8,0,0);
                cVar4 = *pcVar3;
                goto joined_r0x001bc978;
              }
            }
            goto LAB__text__001bc984;
          }
          cVar4 = *pcVar3;
          lVar12 = 0;
        }
joined_r0x001bc978:
        if (cVar4 != '\0') {
          local_70[0] = CONCAT44((int)uVar20,(int)uVar22);
          FUN__text__00191328(local_c8,param_1 + 0x5a6c,local_70);
          local_d0 = lVar16;
          if (lVar16 != 0) {
            (**(code **)(*plVar1 + 0x10))();
          }
          uVar6 = FUN__text__00194730(uVar18,&local_d0,local_c8);
          if (local_d0 != 0) {
            (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
            local_d0 = 0;
          }
          if ((uVar6 & 1) != 0) {
            local_d8 = lVar17;
            if (lVar17 != 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
            FUN__text__001916b0(uVar18,&local_d8,local_c8,0);
            if (local_d8 != 0) {
              (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
              local_d8 = 0;
            }
            if (lVar17 != 0) {
              (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))(plVar2);
              uVar6 = FUN__text__00306588(lVar17);
              if ((uVar6 & 1) == 0) {
                FUN__text__00306a28(lVar17,&local_8c);
                uVar8 = 0;
                lVar13 = param_1 + uVar22 * 1000 + uVar20 * 200;
                lVar10 = *(long *)(lVar13 + 0x2b70);
                lVar21 = *(long *)(lVar13 + 0x2b78);
                if ((lVar10 != -0x340d631b7bddd9bb) && (lVar10 != 0)) {
                  local_70[0] = lVar10;
                  uVar8 = FUN__text__00155100(*(undefined8 *)(lVar9 + 0x2d0),local_70);
                }
                FUN__text__003c3378(lVar19,&local_8c,0,uVar8,0,0);
                uVar8 = 0;
                if ((lVar21 != -0x340d631b7bddd9bb) && (lVar21 != 0)) {
                  local_70[0] = lVar21;
                  uVar8 = FUN__text__00155100(*(undefined8 *)(lVar9 + 0x2d0),local_70);
                }
                FUN__text__003c3378(lVar19,&local_8c,0,uVar8,0,0);
                FUN__text__001beccc(lVar9 + 0x110,lVar15,local_c8,lVar13 + 0x2b60);
              }
              (**(code **)(*plVar2 + 0x18))(plVar2);
            }
          }
        }
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 6);
    uVar20 = uVar20 + 1;
    if (uVar20 == 5) {
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
      }
      if (lVar16 != 0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      if (lVar17 != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
      return;
    }
  } while( true );
}


