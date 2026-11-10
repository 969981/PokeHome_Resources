/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1950; name: FUN_.text__002d1950
 */


bool FUN__text__002d1950(undefined8 param_1,uint param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_34 [4];
  
  uVar1 = FUN__text__005fdad0(param_3);
  local_34[0] = 0;
  local_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN__text__005ffbe4(&local_70,local_34,uVar1,7);
  uVar6 = (uint)local_34[0];
  if (uVar6 != 0) {
    uVar7 = (uint)local_34[0];
    if (param_2 < 2) {
      uVar2 = FUN__text__005fdad0(param_3);
      uVar3 = FUN__text__005fe794(uVar2,0,7);
      if ((uVar3 & 1) == 0) {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          bVar4 = uVar6 <= uVar7 && uVar7 != uVar6;
          if (uVar6 > uVar7 || uVar7 == uVar6) {
            return bVar4;
          }
          uVar2 = FUN__text__005fdad0(param_3);
          uVar3 = FUN__text__005fe794(uVar2,uVar6 & 0xff,7);
        } while ((uVar3 & 1) == 0);
      }
      else {
        bVar4 = true;
      }
      return bVar4;
    }
    uVar5 = 0;
    do {
      FUN__text__005fdad0(param_3);
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar6 && uVar7 != uVar5);
  }
  return false;
}


