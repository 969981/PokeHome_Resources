/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069142c; name: FUN_.text__0069142c
 */


int FUN__text__0069142c(long param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_5c;
  int iStack_58;
  undefined2 local_54 [2];
  short local_38 [2];
  uint local_34;
  
  local_34 = 0;
  uVar3 = FUN__text__00690390(param_1,&local_34,param_4,param_2);
  iVar2 = 0;
  if ((uVar3 & 1) != 0) {
    local_38[0] = 0;
    local_54[0] = 0;
    local_5c = 0;
    iStack_58 = 0;
    if (*(char *)(param_1 + 0x1bd1) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(param_1 + 0x1bd8))(0);
      uVar3 = uVar3 & 0xffffffff;
    }
    uVar4 = (ulong)local_34;
    FUN__text__00691574(param_1,uVar4,uVar3);
    nn::fontll::ScalableFontEngine::SetScale
              ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_3 << 0x10,0,0);
    nn::fontll::ScalableFontEngine::GetError();
    iVar1 = nn::fontll::ScalableFontEngine::GetAdvance
                      ((short *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),local_38,(int *)local_54,
                       &iStack_58,(uint)&local_5c,(ushort)param_2);
    if (iVar1 == 0xc9) {
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 1;
    }
    else {
      iVar2 = 0;
      if (iVar1 == 0) {
        iVar2 = (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar4 * 0x1c + 0x10) *
                     (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + uVar4 * 2) +
                            (int)local_38[0]));
      }
    }
  }
  return iVar2;
}


