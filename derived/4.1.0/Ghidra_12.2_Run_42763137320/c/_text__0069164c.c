/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069164c; name: FUN_.text__0069164c
 */


int FUN__text__0069164c(long param_1,uint param_2,uint param_3,int param_4,undefined2 param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined8 local_68;
  undefined8 local_58;
  
  if (param_2 == 0) {
    local_58 = local_58 & 0xffffffff;
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_3);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar3 = local_58 >> 0x20;
    if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0') &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1bd8))(0);
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN__text__00691574(param_1,uVar3,uVar4);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
      if (lVar5 != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10);
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningFirst
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5
                           ,param_3);
LAB__text__006918ac:
        return (int)(fVar6 * (float)iVar2);
      }
    }
  }
  else if (param_3 == 0) {
    local_58 = local_58 & 0xffffffff;
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar3 = local_58 >> 0x20;
    if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0') &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1bd8))(0);
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN__text__00691574(param_1,uVar3,uVar4);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
      if (lVar5 != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10);
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningLast
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5
                           ,param_2);
        goto LAB__text__006918ac;
      }
    }
  }
  else {
    local_58 = 0;
    uVar3 = FUN__text__00690390(param_1,(long)&local_58 + 4,param_5,param_2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN__text__00690390(param_1,&local_58,param_5,param_3), (uVar3 & 1) != 0)) {
      uVar1 = local_58._4_4_;
      uVar3 = (ulong)local_58._4_4_;
      if ((local_58._4_4_ == (uint)local_58) &&
         ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0' &&
          (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')))) {
        local_68 = 0;
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(param_1 + 0x1bd8))();
          uVar4 = uVar4 & 0xffffffff;
        }
        FUN__text__00691574(param_1,uVar1,uVar4);
        nn::fontll::ScalableFontEngine::SetScale
                  ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
        nn::fontll::ScalableFontEngine::GetError();
        lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
        if ((lVar5 != 0) &&
           (iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerning
                              ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),
                               (uint)lVar5,param_2,param_3), iVar2 != 0)) {
          return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)uVar1 * 0x1c + 0x10) *
                      (float)iVar2);
        }
        iVar2 = nn::fontll::ScalableFontEngine::GetKerning
                          ((int *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),
                           (int *)((long)&local_68 + 4),(uint)&local_68,param_2);
        if (iVar2 == 0) {
          return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)uVar1 * 0x1c + 0x10) *
                      (float)local_68._4_4_) >> 0x10;
        }
      }
    }
  }
  return 0;
}


