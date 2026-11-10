/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00593a60; name: FUN_.text__00593a60
 */


int FUN__text__00593a60(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,float *param_7,ulong param_8,undefined8 *param_9,
                       long *param_10,long *param_11)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  size_t __n;
  long lVar8;
  double dVar9;
  
  dVar9 = exp(param_2 * 0.1151292546497023);
  param_7[2] = (float)(dVar9 * 0.015);
  dVar9 = exp(param_4 * -0.035553490488264054 + -0.35667497232227646);
  param_7[8] = 5.60519e-45;
  param_7[9] = 0.0;
  *param_7 = (float)(1.0 - dVar9);
  param_7[1] = (float)(param_5 * 0.003 + 0.2);
  if (*(long *)(param_7 + 4) != 0) {
    (**(code **)(*param_11 + 0x18))(param_11);
    param_7[4] = 0.0;
    param_7[5] = 0.0;
  }
  pvVar2 = (void *)(**(code **)(*param_11 + 0x10))(param_11,0x4000,0x71803f,0x9f);
  *(void **)(param_7 + 4) = pvVar2;
  if (pvVar2 == (void *)0x0) {
LAB__text__00593db8:
    iVar1 = 0x34;
  }
  else {
    pfVar6 = param_7 + 10;
    pfVar6[0] = 0.0;
    pfVar6[1] = 0.0;
    param_7[6] = 2.29589e-41;
    param_7[7] = 0.0;
    param_7[0xc] = 0.0;
    param_7[0xd] = 0.0;
    lVar8 = (long)(param_1 * param_6 * 0.001 + 0.5);
    uVar7 = *(long *)(param_7 + 8) * lVar8;
    if (uVar7 < 0x4001) {
      *(ulong *)(param_7 + 0xc) = uVar7;
LAB__text__00593cf0:
      memset(pvVar2,0,(ulong)(uint)((int)lVar8 << 2));
      iVar1 = FUN__text__00593160(param_1,param_3 * 0.009000000000000001 + 0.1,param_7 + 0xe,
                                  param_11);
      if (iVar1 != 1) {
        return iVar1;
      }
      pvVar2 = *(void **)(param_7 + 0x9a);
      __n = (param_8 & 0xffff) << 2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)(**(code **)(*param_11 + 0x10))(param_11,__n,0x72051d,0x1d8);
        *(void **)(param_7 + 0x9a) = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB__text__00593db8;
      }
      memset(pvVar2,0,__n);
      *param_9 = *(undefined8 *)(param_7 + 0x9a);
      *param_10 = lVar8;
      param_7[0x9c] = 0.0;
      param_7[0x9d] = 5.60519e-44;
    }
    else {
      uVar4 = 0x4000;
      while( true ) {
        *(ulong *)(param_7 + 6) = uVar4 + uVar7;
        pvVar2 = (void *)(**(code **)(*param_11 + 0x10))(param_11,uVar4 + uVar7,0x71803f,0x5e);
        if (pvVar2 == (void *)0x0) {
          return 0x34;
        }
        memset(pvVar2,0,(ulong)(uint)param_7[6]);
        (**(code **)(*param_11 + 0x18))(param_11,*(undefined8 *)(param_7 + 4));
        lVar3 = *(long *)(param_7 + 0xc);
        *(void **)(param_7 + 4) = pvVar2;
        uVar4 = *(ulong *)(param_7 + 6);
        uVar5 = lVar3 + uVar7;
        if (uVar5 <= uVar4) break;
        while (uVar5 = *(ulong *)pfVar6, 0x4000 < uVar5) {
          memmove(*(void **)(param_7 + 4),(void *)((long)*(void **)(param_7 + 4) + uVar5),
                  lVar3 - uVar5);
          lVar3 = *(long *)(param_7 + 0xc) - *(long *)(param_7 + 10);
          param_7[10] = 0.0;
          param_7[0xb] = 0.0;
          *(long *)(param_7 + 0xc) = lVar3;
          uVar4 = *(ulong *)(param_7 + 6);
          uVar5 = lVar3 + uVar7;
          if (uVar5 <= uVar4) goto LAB__text__00593cd8;
        }
      }
LAB__text__00593cd8:
      *(ulong *)(param_7 + 0xc) = uVar5;
      if (*(long *)(param_7 + 4) != 0) {
        pvVar2 = (void *)(*(long *)(param_7 + 4) + lVar3);
        goto LAB__text__00593cf0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}


