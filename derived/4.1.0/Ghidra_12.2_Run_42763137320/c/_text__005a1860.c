/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1860; name: FUN_.text__005a1860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1860(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70 [4];
  
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0)) {
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    FUN__text__006ebbfc(local_70);
    uVar4 = _DAT_008a0448;
    local_70[0] = CONCAT44((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 5
                                ),(int)local_70[0]) & 0xfffffffeffffff00;
    uVar8 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
    uVar3 = FUN__text__006ee2ac(_DAT_008a0448,local_70);
    uVar4 = FUN__text__006ee384(uVar4,local_70);
    FUN__text__005a5684(&local_90,uVar8,1,uVar3,uVar4);
    *(long *)(param_1 + 0x98) = local_90;
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    }
    lVar1 = local_88;
    local_90 = 0;
    local_88 = 0;
    *(long *)(param_1 + 0xa0) = lVar1;
    *(undefined8 *)(param_1 + 0xa8) = local_80;
    *(undefined8 *)(param_1 + 0xb0) = local_78;
    local_80 = 0xffffffffffffffff;
    local_78 = 0;
    FUN__text__005b509c(&local_90);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
    lVar1 = param_1 + 0x58;
    uVar4 = FUN__text__005b50f0((long *)(param_1 + 0x98));
    FUN__text__006ee434(lVar1,_DAT_008a0448,local_70,uVar4,*(undefined8 *)(param_1 + 0xa8),
                        *(undefined8 *)(param_1 + 0xb0));
    FUN__text__006ee594(lVar1);
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    for (puVar11 = *(undefined8 **)(param_1 + 0xb8); puVar11 != puVar2; puVar11 = puVar11 + 2) {
      uVar9 = (ulong)*(int *)(puVar11 + 1);
      if (*(int *)(puVar11 + 1) < *(int *)((long)puVar11 + 0xc)) {
        do {
          lVar5 = *(long *)(param_1 + 0xe8);
          lVar10 = lVar5 + uVar9 * 0x40;
          lVar12 = *(long *)(lVar10 + 8);
          lVar10 = *(long *)(lVar10 + 0x20);
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
            lVar5 = *(long *)(param_1 + 0xe8);
          }
          lVar6 = (long)*(int *)(puVar11 + 1);
          if (lVar6 < (long)uVar9) {
            plVar7 = (long *)(lVar5 + lVar6 * 0x40 + 8);
            do {
              if (*plVar7 == lVar12) {
                lVar12 = plVar7[-1];
                if (lVar12 != 0) {
                  (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
                  goto LAB__text__005a1a60;
                }
                break;
              }
              lVar6 = lVar6 + 1;
              plVar7 = plVar7 + 8;
            } while (lVar6 < (long)uVar9);
          }
          (**(code **)(*param_2 + 0x10))(&local_90,param_2,lVar5 + uVar9 * 0x40,*puVar11);
          lVar12 = local_90;
LAB__text__005a1a60:
          local_98 = lVar12;
          FUN__text__005a0e74(*(long *)(param_1 + 0xe8) + uVar9 * 0x40,&local_98,lVar1,
                              uVar9 & 0xffffffff);
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)((long)puVar11 + 0xc));
      }
    }
    FUN__text__006ee5a0(lVar1);
  }
  return;
}


