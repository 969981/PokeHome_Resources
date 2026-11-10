/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066071c; name: FUN_.text__0066071c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0066071c(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char acStack_b0 [80];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xa28) == 0) {
    iVar2 = 0;
  }
  else {
    local_60 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    local_50 = 0;
    local_28 = param_2;
    memset(acStack_b0,0,0x50);
    iVar2 = FUN__text__00665820(*(undefined8 *)(param_1 + 0xa30),&local_60);
    if (iVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0xa28) - 1;
      if (uVar1 < 3) {
        iVar2 = 6;
        if ((int)local_48 != 0) {
          iVar2 = (int)local_48 + -1;
        }
        FUN__text__006599c0(acStack_b0,0x50,0x719862,
                            (long)*(int *)((long)(int)uVar1 * 4 + 0x76029c) + 0x76029c,
                            *(undefined8 *)(_DAT_008a65d0 + (long)iVar2 * 8),local_58._4_4_,
                            *(undefined8 *)((long)(int)local_50 * 8 + 0x89a1d0),
                            local_50._4_4_ + 0x76c,(undefined4)local_58,local_60._4_4_,
                            (undefined4)local_60);
        sVar3 = strlen(acStack_b0);
        iVar2 = FUN__text__00660138(&local_28,acStack_b0,sVar3);
      }
      else {
        iVar2 = 0x2b;
      }
    }
    else {
      FUN__text__0066713c(param_1,0x71f869);
    }
  }
  return iVar2;
}


