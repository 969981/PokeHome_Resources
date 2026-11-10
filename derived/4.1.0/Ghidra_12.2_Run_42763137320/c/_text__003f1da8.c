/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f1da8; name: FUN_.text__003f1da8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f1da8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  MutexType *pMVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  *(undefined4 *)((long)param_1 + 0xdf) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *_DAT_008a53e8 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) != 0x10) {
    lVar1 = uVar8 + 0x18;
    *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    pMVar5 = (MutexType *)(plVar3 + 8);
    *(undefined8 *)pMVar5 = 0;
    plVar7 = plVar3 + 1;
    *plVar7 = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    lVar2 = _DAT_008a53f0 + 0x10;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = lVar2;
    FUN__text__003f4374(plVar7);
    *(undefined4 *)(plVar3 + 5) = 0;
    lVar2 = _DAT_008a53f8;
    *(undefined8 *)((long)plVar3 + 0x44) = 0;
    plVar3[10] = 0;
    *(undefined4 *)(plVar3 + 0xb) = 0;
    *(undefined2 *)pMVar5 = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    *plVar7 = lVar2 + 0x10;
    plVar3[2] = lVar2 + 0xa0;
    nn::os::InitializeMutex(pMVar5,true,0);
    *(undefined1 *)(plVar3 + 0xc) = 0;
    *plVar7 = 0x8858e0;
    plVar3[2] = 0x885970;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    puVar6 = (undefined8 *)*param_1;
    *param_1 = plVar3;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar6,param_1[2],param_1[3]);
    }
    param_1[1] = param_2;
    param_1[2] = 0x68;
    param_1[3] = 8;
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
    if (*(long *)(uVar8 + 0x98) != 0x10) {
      *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      *puVar6 = 0x885ac8;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      puVar4 = (undefined8 *)param_1[4];
      param_1[4] = puVar6;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar4,param_1[6],param_1[7]);
      }
      param_1[7] = 8;
      param_1[5] = param_2;
      param_1[6] = 8;
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
      if (*(long *)(uVar8 + 0x98) != 0x10) {
        *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        *puVar6 = 0x885b08;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
        puVar4 = (undefined8 *)param_1[8];
        param_1[8] = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
          (**(code **)(*(long *)param_1[9] + 0x18))
                    ((long *)param_1[9],puVar4,param_1[10],param_1[0xb]);
        }
        param_1[0xb] = 8;
        param_1[9] = param_2;
        param_1[10] = 8;
        puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
        if (*(long *)(uVar8 + 0x98) != 0x10) {
          *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          *puVar6 = 0x885b48;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
          puVar4 = (undefined8 *)param_1[0xc];
          param_1[0xc] = puVar6;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*(long *)param_1[0xd] + 0x18))
                      ((long *)param_1[0xd],puVar4,param_1[0xe],param_1[0xf]);
          }
          param_1[0xf] = 8;
          param_1[0xd] = param_2;
          param_1[0xe] = 8;
          puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
          if (*(long *)(uVar8 + 0x98) != 0x10) {
            *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
            *puVar6 = 0x885cd0;
            *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
            puVar4 = (undefined8 *)param_1[0x10];
            param_1[0x10] = puVar6;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              (**(code **)(*(long *)param_1[0x11] + 0x18))
                        ((long *)param_1[0x11],puVar4,param_1[0x12],param_1[0x13]);
            }
            param_1[0x13] = 8;
            param_1[0x11] = param_2;
            param_1[0x12] = 8;
            puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
            if (*(long *)(uVar8 + 0x98) != 0x10) {
              *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
              *puVar6 = 0x885d08;
              *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
              plVar3 = (long *)param_1[0x14];
              param_1[0x14] = puVar6;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 8))(plVar3);
                (**(code **)(*(long *)param_1[0x15] + 0x18))
                          ((long *)param_1[0x15],plVar3,param_1[0x16],param_1[0x17]);
              }
              param_1[0x17] = 8;
              param_1[0x15] = param_2;
              param_1[0x16] = 8;
              puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
              if (*(long *)(uVar8 + 0x98) != 0x10) {
                *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = param_2;
                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
                *puVar6 = 0x885d50;
                *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
                puVar4 = (undefined8 *)param_1[0x18];
                param_1[0x18] = puVar6;
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4);
                  (**(code **)(*(long *)param_1[0x19] + 0x18))
                            ((long *)param_1[0x19],puVar4,param_1[0x1a],param_1[0x1b]);
                }
                param_1[0x19] = param_2;
                param_1[0x1a] = 8;
                param_1[0x1b] = 8;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


