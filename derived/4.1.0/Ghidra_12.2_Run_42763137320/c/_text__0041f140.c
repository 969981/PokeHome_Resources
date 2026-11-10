/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041f140; name: thunk_FUN_.text__00422210
 */


void thunk_FUN__text__00422210
               (long param_1,long param_2,long param_3,long param_4,uint *param_5,uint param_6,
               uint param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_6 == 1) {
    FUN__text__00420ee0(param_1,param_2,param_3,param_4,*param_5,param_7);
    return;
  }
  if (param_7 != 0) {
    if (param_6 == 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 8;
      } while (uVar4 < param_7);
    }
    else {
      uVar8 = 0;
      do {
        uVar4 = param_7 - (int)uVar8;
        lVar2 = uVar8 * 8;
        if (7 < uVar4) {
          uVar4 = 8;
        }
        memcpy(&lStack_a8,(void *)(param_1 + lVar2),(ulong)(uVar4 << 3));
        memcpy(&lStack_e8,(void *)(param_2 + lVar2),(ulong)(uVar4 << 3));
        uVar5 = 0;
        uVar6 = (ulong)param_6;
        puVar7 = param_5;
        do {
          uVar1 = *puVar7;
          FUN__text__00420ee0(&lStack_a8,&lStack_e8,param_3 + lVar2 + uVar5 * 8,param_4 + lVar2,
                              (ulong)uVar1,uVar4);
          lVar3 = (ulong)uVar1 * 4;
          uVar5 = (ulong)((int)uVar5 + param_7);
          uVar6 = uVar6 - 1;
          lStack_a8 = lStack_a8 + lVar3;
          lStack_a0 = lStack_a0 + lVar3;
          lStack_e8 = lStack_e8 + lVar3;
          lStack_e0 = lStack_e0 + lVar3;
          lStack_98 = lStack_98 + lVar3;
          lStack_90 = lStack_90 + lVar3;
          lStack_d8 = lStack_d8 + lVar3;
          lStack_d0 = lStack_d0 + lVar3;
          lStack_88 = lStack_88 + lVar3;
          lStack_80 = lStack_80 + lVar3;
          lStack_c8 = lStack_c8 + lVar3;
          lStack_c0 = lStack_c0 + lVar3;
          lStack_78 = lStack_78 + lVar3;
          lStack_70 = lStack_70 + lVar3;
          lStack_b8 = lStack_b8 + lVar3;
          lStack_b0 = lStack_b0 + lVar3;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
        uVar4 = (int)uVar8 + 8;
        uVar8 = (ulong)uVar4;
      } while (uVar4 < param_7);
    }
  }
  return;
}


