/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b044c; name: FUN_.text__003b044c
 */


uint FUN__text__003b044c(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  float fVar6;
  undefined8 *local_58;
  long local_50;
  undefined8 local_48;
  undefined4 local_14;
  
  uVar1 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748));
  if ((uVar1 & 1) == 0) {
    FUN__text__003a1648(param_1,0);
    *(undefined1 *)(param_1 + 0x85) = 1;
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),1);
    if ((*(int *)(param_1 + 0x868) != -1) &&
       (plVar4 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar4 != (long *)0x0)) {
      local_50 = *plVar4;
      local_58 = &local_48;
      local_48 = 0;
      FUN__text__003aa1c0(param_1,&local_58,0);
      FUN__text__003a14e8(local_48,1);
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        local_58 = (undefined8 *)*plVar4;
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x868));
        local_14 = (undefined4)plVar4[2];
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_48,&local_58,&local_14);
      }
    }
    iVar5 = *(int *)(*(long *)(param_1 + 0x800) + 0x10);
    fVar6 = *(float *)(*(long *)(param_1 + 0x748) + 0x1d4);
    iVar2 = FUN__text__003b7128(*(long *)(param_1 + 0x800),param_1 + 0x7ac);
    iVar3 = FUN__text__003b73fc(*(undefined8 *)(param_1 + 0x800),param_1 + 0x6ec);
    FUN__text__003adcc0(param_1,(int)((float)iVar2 - (float)(iVar3 + -1) * (fVar6 - (float)iVar5)),
                        (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4));
  }
  return (uVar1 ^ 0xffffffff) & 1;
}


