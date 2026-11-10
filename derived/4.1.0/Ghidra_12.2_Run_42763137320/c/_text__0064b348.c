/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b348; name: FUN_.text__0064b348
 */


void FUN__text__0064b348(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  pvVar1 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x2000000,1);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    memset(pvVar1,0,0x2000000);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar2 = param_1[3];
    param_1[3] = pvVar1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[5],param_1[6]);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = param_2;
    param_1[5] = 0x2000000;
    param_1[6] = 1;
    memset(pvVar1,0,0x2000000);
    plVar3 = (long *)param_1[0x11];
    pvVar1 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x2000000,1);
    if (*(long *)(uVar4 + 0x98) != 0x10) {
      *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = plVar3;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      memset(pvVar1,0,0x2000000);
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      lVar2 = param_1[7];
      param_1[7] = pvVar1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],lVar2,param_1[9],param_1[10]);
        pvVar1 = (void *)param_1[7];
      }
      param_1[8] = plVar3;
      param_1[9] = 0x2000000;
      param_1[10] = 1;
      memset(pvVar1,0,0x2000000);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


