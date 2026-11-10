/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d331c; name: FUN_.text__004d331c
 */


undefined8
FUN__text__004d331c(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                   long param_6,uint param_7,undefined4 param_8,uint param_9,void *param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  float local_9c;
  float fStack_98;
  float local_94;
  
  uVar6 = 0x1f;
  if ((((0.0 <= param_3) && (0.0 <= param_4)) && (param_3 <= 1.0)) && (param_4 <= 1.0)) {
    uVar1 = param_7 & 0xff;
    uVar2 = (param_9 & 0xff) + 3 & 0x1fc;
    iVar5 = uVar2 * uVar1;
    if (iVar5 != 0) {
      memset(param_10,0,(ulong)(uint)(iVar5 * 4));
    }
    fVar9 = cosf(param_2);
    fVar10 = sinf(param_1);
    fVar11 = sinf(param_2);
    local_94 = cosf(param_1);
    local_94 = fVar9 * local_94;
    local_b4 = 0;
    local_ac = 0x3f800000;
    local_a4 = 0x3f800000;
    local_9c = fVar9 * fVar10;
    fStack_98 = fVar11;
    lVar7 = FUN__text__0040a740(param_6 + 0x68);
    if (lVar7 == 0) {
      uVar6 = 2;
    }
    else {
      iVar5 = FUN__text__004884b0(lVar7 + 200,param_9);
      if (iVar5 == 1) {
        uVar8 = param_7;
        uVar4 = uVar1;
        if ((param_7 & 0xf00) == 0x100) {
          uVar8 = param_7 >> 0xc & 0x637;
          uVar4 = uVar8 - (uVar8 >> 1 & 0xf1f1f1f1);
          uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
          uVar3 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101;
          uVar4 = uVar3 >> 0x18;
          uVar8 = uVar8 << 0xc | uVar3 >> 0x18 | 0x100;
        }
        if (uVar4 != 0) {
          FUN__text__004828c0(param_5,param_3,param_4,&local_b4,param_10,uVar8,param_8,param_9,
                              lVar7 + 200);
        }
        if (((param_7 & param_9) >> 0xf & 1) != 0) {
          *(undefined4 *)
           ((long)param_10 +
           (long)(int)((param_9 & 0xff) - 1) * 4 + (ulong)(uVar2 * (uVar1 - 1)) * 4) = 0x3f800000;
        }
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


