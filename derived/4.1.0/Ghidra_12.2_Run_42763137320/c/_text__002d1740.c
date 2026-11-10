/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1740; name: FUN_.text__002d1740
 */


uint FUN__text__002d1740(undefined8 param_1,undefined2 param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_34 [4];
  
  local_34[0] = 0;
  local_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN__text__005ffbe4(&local_70,local_34,param_2,7);
  uVar3 = (uint)local_34[0];
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN__text__006006a0(param_2,uVar2);
      if ((uVar1 & 1) != 0) goto LAB__text__002d17b0;
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  uVar2 = 0;
LAB__text__002d17b0:
  local_34[0] = 0;
  local_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN__text__005ffbe4(&local_70,local_34,param_2,7);
  uVar3 = (uint)local_34[0];
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = FUN__text__006006a0(param_2,uVar4);
      if (((uVar2 & 0xffff) != (uVar4 & 0xffff)) && ((uVar1 & 1) != 0)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return 0;
}


