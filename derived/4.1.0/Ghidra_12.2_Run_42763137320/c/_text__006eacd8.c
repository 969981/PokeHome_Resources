/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eacd8; name: FUN_.text__006eacd8
 */


bool FUN__text__006eacd8(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                        undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN__text__006ebbe4(&local_50);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50._4_4_ = param_4;
    FUN__text__006ebc14(&local_70);
    local_70 = CONCAT44(local_70._4_4_,0x22);
    uVar2 = FUN__text__006ec37c(param_2,&local_50);
    *(undefined8 *)(param_1 + 0x188) = uVar2;
    uVar2 = FUN__text__006ee660(param_2,&local_70);
    lVar5 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x180) = lVar5;
    lVar3 = FUN__text__006ee668(param_2,&local_70);
    uVar4 = (lVar5 + lVar3) - 1U & -lVar3;
    *(ulong *)(param_1 + 0x180) = uVar4;
    local_68 = (**(code **)(*param_3 + 0x10))(param_3,uVar4,uVar2);
    bVar1 = local_68 != 0;
    *(long *)(param_1 + 0x178) = local_68;
    if (local_68 != 0) {
      local_70 = CONCAT44((int)*(undefined8 *)(param_1 + 0x180),(undefined4)local_70);
      FUN__text__006ee680(param_1 + 0x58,param_2,&local_70);
      local_50 = CONCAT44(local_50._4_4_,(int)*(undefined8 *)(param_1 + 0x48));
      FUN__text__006ec4cc(param_1,param_2,&local_50,param_1 + 0x58,0,
                          *(undefined8 *)(param_1 + 0x180));
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


