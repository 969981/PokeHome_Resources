/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005450e0; name: FUN_.text__005450e0
 */


undefined8
FUN__text__005450e0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,int *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  double *pdVar5;
  undefined8 *__s;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  uVar1 = FUN__text__00545340(param_1,param_2,*param_3,&local_38,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)puVar2[0x1c4]) {
    if (puVar2[0x1c6] != 0) goto LAB__text__00545180;
  }
  puVar2 = (undefined8 *)FUN__text__00400f90(10,0xe38,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x1c4] = 0;
    puVar2[0xe2] = puVar2 + 0x71;
    *puVar2 = 0;
    puVar2[0x1c6] = puVar2 + 0x153;
    puVar2[0x71] = puVar2;
    puVar2[0x153] = puVar2 + 0xe2;
    *(undefined4 *)(puVar2 + 0x1c5) = 4;
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      puVar2[0x1c4] = 0;
      __s = (undefined8 *)puVar2[0x1c6];
    }
    else {
      puVar2[0x1c4] = *(long *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar2;
LAB__text__00545180:
      __s = (undefined8 *)puVar2[0x1c6];
    }
    if (__s != (undefined8 *)0x0) {
      puVar2[0x1c6] = *__s;
      *__s = 0;
      *(int *)(puVar2 + 0x1c5) = *(int *)(puVar2 + 0x1c5) + -1;
      memset(__s,0,0x300);
      uVar3 = 0;
      __s[0x70] = 0xffffffff00000000;
      if (*param_5 == 1) {
        *(int *)((long)__s + 900) = *(int *)(*param_3 + 900) + 1;
        local_48 = (undefined8 *)*param_3;
        local_78 = *local_48;
        uStack_70 = local_48[1];
        local_68 = local_48[2];
        dStack_60 = (double)local_48[3];
        local_58 = (double)local_48[4];
        dStack_50 = (double)local_48[5];
        if (1 < (int)*(uint *)(local_48 + 0x70)) {
          lVar4 = (ulong)*(uint *)(local_48 + 0x70) - 1;
          pdVar5 = (double *)(local_48 + 0xb);
          do {
            lVar4 = lVar4 + -1;
            uStack_70 = NEON_fminnm(uStack_70,pdVar5[-4]);
            local_78 = NEON_fminnm(local_78,pdVar5[-5]);
            if (dStack_60 <= pdVar5[-2]) {
              dStack_60 = pdVar5[-2];
            }
            local_68 = NEON_fminnm(local_68,pdVar5[-3]);
            if (local_58 <= pdVar5[-1]) {
              local_58 = pdVar5[-1];
            }
            if (dStack_50 <= *pdVar5) {
              dStack_50 = *pdVar5;
            }
            pdVar5 = pdVar5 + 6;
          } while (lVar4 != 0);
        }
        FUN__text__00545550(param_1,&local_78,__s,0,param_5);
        local_78 = *local_38;
        uStack_70 = local_38[1];
        local_68 = local_38[2];
        dStack_60 = (double)local_38[3];
        local_58 = (double)local_38[4];
        dStack_50 = (double)local_38[5];
        if (1 < (int)*(uint *)(local_38 + 0x70)) {
          lVar4 = (ulong)*(uint *)(local_38 + 0x70) - 1;
          pdVar5 = (double *)(local_38 + 0xb);
          do {
            lVar4 = lVar4 + -1;
            uStack_70 = NEON_fminnm(uStack_70,pdVar5[-4]);
            local_78 = NEON_fminnm(local_78,pdVar5[-5]);
            if (dStack_60 <= pdVar5[-2]) {
              dStack_60 = pdVar5[-2];
            }
            local_68 = NEON_fminnm(local_68,pdVar5[-3]);
            if (local_58 <= pdVar5[-1]) {
              local_58 = pdVar5[-1];
            }
            if (dStack_50 <= *pdVar5) {
              dStack_50 = *pdVar5;
            }
            pdVar5 = pdVar5 + 6;
          } while (lVar4 != 0);
        }
        local_48 = local_38;
        FUN__text__00545550(param_1,&local_78,__s,0,param_5);
        uVar3 = 1;
        *param_3 = (long)__s;
      }
      return uVar3;
    }
  }
  *param_5 = 0x34;
  return 0;
}


