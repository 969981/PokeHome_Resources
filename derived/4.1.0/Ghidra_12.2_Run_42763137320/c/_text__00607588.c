/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607588; name: FUN_.text__00607588
 */


uint FUN__text__00607588(undefined8 param_1,undefined2 param_2,undefined8 *param_3,
                        undefined2 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  
  uVar2 = FUN__text__006029e4(param_4);
  cVar1 = FUN__text__00602ddc(param_5);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    local_48 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN__text__00602e04(&local_60,param_1,param_2,param_5);
    uVar3 = FUN__text__006078a0(&local_60,uVar2,cVar1);
    if ((uVar3 & 1) == 0) {
      local_68 = 0;
      local_78 = 0;
      local_70 = 0;
      local_80 = 0;
      FUN__text__00601290(&local_80,uVar2,cVar1);
      *param_3 = local_80;
      param_3[1] = local_78;
      local_50 = local_70;
      local_48 = local_68;
    }
    else {
      *param_3 = local_60;
      param_3[1] = local_58;
    }
    param_3[2] = local_50;
    *(undefined2 *)(param_3 + 3) = local_48;
  }
  return uVar3 & 1;
}


