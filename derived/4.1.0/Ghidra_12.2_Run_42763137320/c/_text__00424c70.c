/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00424c70; name: FUN_.text__00424c70
 */


void FUN__text__00424c70(long param_1,long param_2,long param_3,long param_4,long param_5,
                        long param_6,uint *param_7,uint param_8,uint param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  if (param_8 == 1) {
    FUN__text__00422770(param_1,param_2,param_3,param_4,param_5,param_6,*param_7,param_9);
    return;
  }
  if (param_9 != 0) {
    if (param_8 == 0) {
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 < param_9);
    }
    else {
      uVar4 = 0;
      do {
        uVar5 = param_9 - (int)uVar4;
        lVar2 = uVar4 * 8;
        if (7 < uVar5) {
          uVar5 = 8;
        }
        memcpy(&local_a8,(void *)(param_1 + lVar2),(ulong)(uVar5 << 3));
        memcpy(&local_e8,(void *)(param_2 + lVar2),(ulong)(uVar5 << 3));
        uVar7 = 0;
        puVar6 = param_7;
        uVar8 = (ulong)param_8;
        do {
          uVar1 = *puVar6;
          FUN__text__00422770(&local_a8,&local_e8,param_3 + lVar2 + uVar7 * 8,param_4 + lVar2,
                              param_5 + lVar2 + uVar7 * 8,param_6 + lVar2,(ulong)uVar1,uVar5);
          lVar3 = (ulong)uVar1 * 4;
          uVar7 = (ulong)((int)uVar7 + param_9);
          uVar8 = uVar8 - 1;
          local_a8 = local_a8 + lVar3;
          lStack_a0 = lStack_a0 + lVar3;
          local_e8 = local_e8 + lVar3;
          lStack_e0 = lStack_e0 + lVar3;
          local_98 = local_98 + lVar3;
          lStack_90 = lStack_90 + lVar3;
          local_d8 = local_d8 + lVar3;
          lStack_d0 = lStack_d0 + lVar3;
          local_88 = local_88 + lVar3;
          lStack_80 = lStack_80 + lVar3;
          local_c8 = local_c8 + lVar3;
          lStack_c0 = lStack_c0 + lVar3;
          local_78 = local_78 + lVar3;
          lStack_70 = lStack_70 + lVar3;
          local_b8 = local_b8 + lVar3;
          lStack_b0 = lStack_b0 + lVar3;
          puVar6 = puVar6 + 1;
        } while (uVar8 != 0);
        uVar5 = (int)uVar4 + 8;
        uVar4 = (ulong)uVar5;
      } while (uVar5 < param_9);
    }
  }
  return;
}


