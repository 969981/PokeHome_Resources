/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001634a0; name: FUN_.text__001634a0
 */


/* WARNING: Removing unreachable block (ram,0x001638e0) */
/* WARNING: Removing unreachable block (ram,0x001639ec) */

void FUN__text__001634a0(long param_1,uint param_2,uint param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long local_68;
  uint local_44;
  
  *(uint *)(param_1 + 0x1a0) = param_2;
  *(long **)(param_1 + 0x228) = param_4;
  local_44 = param_3;
  FUN__text__00163d7c(&local_68,param_4,&local_44);
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x170) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44);
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x178) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44);
  if (*(long *)(param_1 + 0x180) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x180) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44);
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x188) = local_68;
  FUN__text__00163e98(&local_68,param_4,0x7252c0);
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
  }
  uVar2 = *(uint *)(param_1 + 0x1a0);
  *(long *)(param_1 + 400) = local_68;
  sVar7 = (ulong)uVar2 * 0x18;
  pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,8);
  uVar10 = tpidr_el0;
  uVar10 = uVar10 & 0xffffffffffffe000;
  if (*(long *)(uVar10 + 0x98) != 0x10) {
    lVar1 = uVar10 + 0x18;
    *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
    lVar6 = *(long *)(uVar10 + 0x98);
    *(long *)(uVar10 + 0x98) = lVar6 + 1;
    if (uVar2 != 0) {
      memset(pvVar3,0,sVar7);
      lVar6 = *(long *)(uVar10 + 0x98) + -1;
    }
    *(long *)(uVar10 + 0x98) = lVar6;
    plVar9 = *(long **)(param_1 + 0x1a8);
    *(void **)(param_1 + 0x1a8) = pvVar3;
    if (plVar9 != (long *)0x0) {
      uVar5 = *(ulong *)(param_1 + 0x1b8);
      if (0x17 < uVar5) {
        uVar5 = uVar5 / 0x18;
        plVar11 = plVar9;
        do {
          if (*plVar11 != 0) {
            (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
            *plVar11 = 0;
          }
          uVar5 = uVar5 - 1;
          plVar11 = plVar11 + 3;
        } while (uVar5 != 0);
        uVar5 = *(ulong *)(param_1 + 0x1b8);
      }
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18))
                (*(long **)(param_1 + 0x1b0),plVar9,uVar5,*(undefined8 *)(param_1 + 0x1c0));
    }
    uVar2 = local_44;
    *(long **)(param_1 + 0x1b0) = param_4;
    *(size_t *)(param_1 + 0x1b8) = sVar7;
    *(undefined8 *)(param_1 + 0x1c0) = 8;
    sVar7 = (ulong)local_44 << 1;
    pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,2);
    if (*(long *)(uVar10 + 0x98) != 0x10) {
      *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
      lVar6 = *(long *)(uVar10 + 0x98);
      *(long *)(uVar10 + 0x98) = lVar6 + 1;
      if (uVar2 != 0) {
        memset(pvVar3,0,sVar7);
        lVar6 = *(long *)(uVar10 + 0x98) + -1;
      }
      *(long *)(uVar10 + 0x98) = lVar6;
      lVar6 = *(long *)(param_1 + 0x1e8);
      *(void **)(param_1 + 0x1e8) = pvVar3;
      if (lVar6 != 0) {
        (**(code **)(**(long **)(param_1 + 0x1f0) + 0x18))
                  (*(long **)(param_1 + 0x1f0),lVar6,*(undefined8 *)(param_1 + 0x1f8),
                   *(undefined8 *)(param_1 + 0x200));
      }
      *(long **)(param_1 + 0x1f0) = param_4;
      *(size_t *)(param_1 + 0x1f8) = sVar7;
      *(undefined8 *)(param_1 + 0x200) = 2;
      if (*(long *)(uVar10 + 0x98) != 0x10) {
        *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
        lVar6 = (**(code **)(*param_4 + 0x10))(param_4,0x60,8);
        if (lVar6 == 0) {
          (**(code **)(*param_4 + 0xb8))(param_4);
        }
        FUN__text__00156da0(lVar6,param_4,local_44);
        *(long **)(lVar6 + 8) = param_4;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x60;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        if (*(long *)(param_1 + 0x198) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))();
        }
        *(long *)(param_1 + 0x198) = lVar6;
        sVar7 = (ulong)param_2 << 3;
        pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,4);
        if (*(long *)(uVar10 + 0x98) != 0x10) {
          *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
          lVar6 = *(long *)(uVar10 + 0x98);
          *(long *)(uVar10 + 0x98) = lVar6 + 1;
          if (param_2 != 0) {
            memset(pvVar3,0,sVar7);
            lVar6 = *(long *)(uVar10 + 0x98) + -1;
          }
          *(long *)(uVar10 + 0x98) = lVar6;
          lVar6 = *(long *)(param_1 + 0x208);
          *(void **)(param_1 + 0x208) = pvVar3;
          if (lVar6 != 0) {
            (**(code **)(**(long **)(param_1 + 0x210) + 0x18))
                      (*(long **)(param_1 + 0x210),lVar6,*(undefined8 *)(param_1 + 0x218),
                       *(undefined8 *)(param_1 + 0x220));
          }
          lVar6 = *(long *)(param_1 + 0x1a8);
          *(long **)(param_1 + 0x210) = param_4;
          *(size_t *)(param_1 + 0x218) = sVar7;
          *(undefined8 *)(param_1 + 0x220) = 4;
          if (lVar6 == 0) {
            uVar5 = 0;
LAB__text__00163914:
            *(int *)(param_1 + 0x1a0) = (int)uVar5;
          }
          else if (*(int *)(param_1 + 0x1a0) != 0) {
            lVar8 = 0;
            uVar5 = 0;
            do {
              *(ushort *)(lVar6 + lVar8 + 0x12) = *(ushort *)(lVar6 + lVar8 + 0x12) & 0xfffe;
              *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar8 + 8) = 0;
              FUN__text__00163d7c(&local_68,param_4,&local_44);
              lVar6 = *(long *)(param_1 + 0x1a8);
              if (*(long *)(lVar6 + lVar8) != 0) {
                (**(code **)(*(long *)(*(long *)(lVar6 + lVar8) + 0x48) + 0x18))();
                *(undefined8 *)(lVar6 + lVar8) = 0;
              }
              *(long *)(lVar6 + lVar8) = local_68;
              local_68 = 0;
              lVar6 = *(long *)(param_1 + 0x1a8);
              if (*(long *)(lVar6 + lVar8) == 0) goto LAB__text__00163914;
              uVar5 = uVar5 + 1;
              lVar8 = lVar8 + 0x18;
            } while (uVar5 < *(uint *)(param_1 + 0x1a0));
          }
          puVar4 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x18,8);
          if (*(long *)(uVar10 + 0x98) != 0x10) {
            *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
            plVar9 = *(long **)(param_1 + 0x1c8);
            *(undefined8 **)(param_1 + 0x1c8) = puVar4;
            if (plVar9 != (long *)0x0) {
              if (*plVar9 != 0) {
                (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
                *plVar9 = 0;
              }
              (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))
                        (*(long **)(param_1 + 0x1d0),plVar9,*(undefined8 *)(param_1 + 0x1d8),
                         *(undefined8 *)(param_1 + 0x1e0));
            }
            *(long **)(param_1 + 0x1d0) = param_4;
            *(undefined8 *)(param_1 + 0x1d8) = 0x18;
            *(undefined8 *)(param_1 + 0x1e0) = 8;
            FUN__text__00163d7c(&local_68,param_4,&local_44);
            plVar9 = *(long **)(param_1 + 0x1c8);
            if (*plVar9 != 0) {
              (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
              *plVar9 = 0;
            }
            *plVar9 = local_68;
            *(undefined4 *)(param_1 + 0x23c) = 0;
            *(undefined4 *)(param_1 + 0x244) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


