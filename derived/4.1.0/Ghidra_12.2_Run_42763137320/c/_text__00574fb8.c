/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00574fb8; name: FUN_.text__00574fb8
 */


undefined8
FUN__text__00574fb8(long param_1,long *param_2,undefined8 param_3,long param_4,uint *param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  
  uVar10 = *param_5;
  *(long *)(param_1 + 0x158) = param_4;
  *(long **)(param_1 + 0x160) = param_2;
  *(uint *)(param_1 + 0x130) = uVar10;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_4 + 0x74);
  uVar4 = *(undefined8 *)(param_4 + 8);
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x178) = uVar6;
  *(undefined8 *)(param_1 + 0x168) = uVar4;
  fVar11 = 1.0 / (float)uVar10;
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x198) = uVar7;
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  *(undefined8 *)(param_1 + 0x188) = uVar6;
  uVar7 = *(undefined8 *)(param_4 + 0x50);
  uVar4 = *(undefined8 *)(param_4 + 0x40);
  uVar6 = *(undefined8 *)(param_4 + 0x48);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  cVar2 = *(char *)(param_4 + 0x99) << 1;
  *(char *)(param_1 + 0x138) = cVar2;
  cVar1 = '\0';
  if ((param_5[1] & 0xfffff000) != 0x8000) {
    cVar1 = cVar2;
  }
  *(char *)(param_1 + 0x138) = cVar1;
  *(float *)(param_1 + 0x78) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x84) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x90) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0x9c) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0xa8) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  *(float *)(param_1 + 0xb4) = 1.0 - fVar11 * *(float *)(param_4 + 0xbc) * 6.2831855;
  uVar4 = FUN__text__00575330();
  if (((int)uVar4 == 1) && (uVar4 = FUN__text__005754a0(param_1,param_2), (int)uVar4 == 1)) {
    lVar9 = *(long *)(param_1 + 0x158);
    uVar10 = *(uint *)(param_1 + 0x130);
    if (*(char *)(param_1 + 0x138) != '\0') {
      fVar11 = exp2f(*(float *)(lVar9 + 100) * 0.01);
      lVar3 = (ulong)*(uint *)(lVar9 + 0x5c) * 0x28;
      fVar11 = (float)NEON_fminnm(**(float **)(lVar3 + 0x892bb0) * fVar11,
                                  **(float **)(lVar3 + 0x892bc0) * fVar11);
      if ((int)(fVar11 * (float)uVar10 * 0.001) != 0) {
        uVar4 = FUN__text__0057c744(param_1 + 0xb8,param_2);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        lVar9 = *(long *)(param_1 + 0x158);
        uVar10 = *(uint *)(param_1 + 0x130);
      }
    }
    if ((int)(*(float *)(lVar9 + 0x60) * 0.001 * (float)uVar10) != 0) {
      uVar4 = FUN__text__0057c744(param_1 + 0xd0,param_2);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      lVar9 = *(long *)(param_1 + 0x158);
    }
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar10 = *(uint *)(lVar9 + 0x5c);
      puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,800,0x715356,0x1b0);
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
        return 0x34;
      }
      *puVar5 = 0;
      memset(puVar5 + 2,0,0x314);
      *(undefined4 **)(param_1 + 0x150) = puVar5;
      lVar9 = (ulong)uVar10 * 0x28;
      uVar4 = FUN__text__0057cb70(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar5,param_2,
                                  *(undefined8 *)(lVar9 + 0x892bb0),
                                  *(undefined8 *)(lVar9 + 0x892bc0),
                                  *(undefined4 *)(lVar9 + 0x892ba8),
                                  *(undefined4 *)(lVar9 + 0x892bb8),*(undefined4 *)(param_1 + 0x130)
                                 );
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
        iVar8 = (int)(*(float *)(*(long *)(param_1 + 0x158) + 0x68) * 0.001 * fVar11);
        if (iVar8 != 0) {
          uVar10 = param_5[1] >> 8 & 0xf;
          if ((uVar10 == 2) || ((uVar10 == 1 && ((param_5[1] & 0x210000) != 0)))) {
            uVar4 = FUN__text__0057c744(param_1 + 0xe8,param_2,iVar8);
            if ((int)uVar4 != 1) {
              return uVar4;
            }
            uVar4 = FUN__text__0057c744(param_1 + 0x100,param_2,iVar8);
            if ((int)uVar4 != 1) {
              return uVar4;
            }
          }
        }
      }
    }
    uVar4 = FUN__text__005759c0(param_1,param_2);
    if ((int)uVar4 == 1) {
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      *(int *)(param_1 + 0x120) =
           (int)((*(float *)(*(long *)(param_1 + 0x158) + 8) +
                 *(float *)(*(long *)(param_1 + 0x158) + 0x60) * 0.001) * fVar11);
    }
  }
  return uVar4;
}


