/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00512ac0; name: FUN_.text__00512ac0
 */


undefined8
FUN__text__00512ac0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,int *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *__s;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined4 *local_48;
  undefined4 *local_38;
  
  uVar1 = FUN__text__00512d30(param_1,param_2,*param_3,&local_38,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)puVar2[0x1c7]) {
    if (puVar2[0x1c9] != 0) goto LAB__text__00512b78;
  }
  puVar2 = (undefined8 *)FUN__text__00400f90(10,0xe50,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x1c7] = 0;
    puVar2[0xc3] = puVar2 + 0x82;
    puVar2[0x82] = puVar2 + 0x41;
    puVar2[0x145] = puVar2 + 0x104;
    puVar2[0x104] = puVar2 + 0xc3;
    puVar2[0x1c9] = puVar2 + 0x186;
    *puVar2 = 0;
    puVar2[0x41] = puVar2;
    puVar2[0x186] = puVar2 + 0x145;
    *(undefined4 *)(puVar2 + 0x1c8) = 7;
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      puVar2[0x1c7] = 0;
      __s = (undefined8 *)puVar2[0x1c9];
    }
    else {
      puVar2[0x1c7] = *(long *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar2;
LAB__text__00512b78:
      __s = (undefined8 *)puVar2[0x1c9];
    }
    if (__s != (undefined8 *)0x0) {
      puVar2[0x1c9] = *__s;
      *__s = 0;
      *(int *)(puVar2 + 0x1c8) = *(int *)(puVar2 + 0x1c8) + -1;
      memset(__s,0,0x180);
      uVar3 = 0;
      __s[0x40] = 0xffffffff00000000;
      if (*param_5 == 1) {
        *(int *)((long)__s + 0x204) = *(int *)(*param_3 + 0x204) + 1;
        local_48 = (undefined4 *)*param_3;
        local_60 = *local_48;
        uStack_5c = local_48[1];
        local_58 = local_48[2];
        fStack_54 = (float)local_48[3];
        local_50 = (float)local_48[4];
        fStack_4c = (float)local_48[5];
        if (1 < (int)local_48[0x80]) {
          lVar4 = (ulong)(uint)local_48[0x80] - 1;
          pfVar5 = (float *)(local_48 + 0xb);
          do {
            lVar4 = lVar4 + -1;
            uStack_5c = NEON_fminnm(uStack_5c,pfVar5[-4]);
            local_60 = NEON_fminnm(local_60,pfVar5[-5]);
            if (fStack_54 <= pfVar5[-2]) {
              fStack_54 = pfVar5[-2];
            }
            local_58 = NEON_fminnm(local_58,pfVar5[-3]);
            if (local_50 <= pfVar5[-1]) {
              local_50 = pfVar5[-1];
            }
            if (fStack_4c <= *pfVar5) {
              fStack_4c = *pfVar5;
            }
            pfVar5 = pfVar5 + 6;
          } while (lVar4 != 0);
        }
        FUN__text__00512f40(param_1,&local_60,__s,0,param_5);
        local_60 = *local_38;
        uStack_5c = local_38[1];
        local_58 = local_38[2];
        fStack_54 = (float)local_38[3];
        local_50 = (float)local_38[4];
        fStack_4c = (float)local_38[5];
        if (1 < (int)local_38[0x80]) {
          lVar4 = (ulong)(uint)local_38[0x80] - 1;
          pfVar5 = (float *)(local_38 + 0xb);
          do {
            lVar4 = lVar4 + -1;
            uStack_5c = NEON_fminnm(uStack_5c,pfVar5[-4]);
            local_60 = NEON_fminnm(local_60,pfVar5[-5]);
            if (fStack_54 <= pfVar5[-2]) {
              fStack_54 = pfVar5[-2];
            }
            local_58 = NEON_fminnm(local_58,pfVar5[-3]);
            if (local_50 <= pfVar5[-1]) {
              local_50 = pfVar5[-1];
            }
            if (fStack_4c <= *pfVar5) {
              fStack_4c = *pfVar5;
            }
            pfVar5 = pfVar5 + 6;
          } while (lVar4 != 0);
        }
        local_48 = local_38;
        FUN__text__00512f40(param_1,&local_60,__s,0,param_5);
        uVar3 = 1;
        *param_3 = (long)__s;
      }
      return uVar3;
    }
  }
  *param_5 = 0x34;
  return 0;
}


