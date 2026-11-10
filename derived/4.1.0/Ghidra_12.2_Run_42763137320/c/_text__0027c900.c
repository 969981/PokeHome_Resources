/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027c900; name: FUN_.text__0027c900
 */


bool FUN__text__0027c900(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_44 [4];
  
  lVar1 = param_1 + (ulong)param_2 * 0x10;
  if (*(int *)(lVar1 + 0x7b238) < 1) {
    return false;
  }
  cVar2 = *(char *)(*(long *)(lVar1 + 0x7b240) + 0x10);
  if (cVar2 == '\x02') {
    local_44[0] = 0;
    local_80 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN__text__005ffbe4(&local_80,local_44,param_2,0);
    if (local_44[0] == 0) {
      local_44[0] = 10;
    }
    uVar8 = 0;
    do {
      uVar5 = FUN__text__00325c10(param_2,uVar8 & 0xffffffff);
      if ((uVar5 & 0x8001) != 0) {
        return (uVar5 & 0x8001) != 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_44[0]);
  }
  else {
    if (cVar2 != '\x01') {
      return true;
    }
    puVar7 = *(ushort **)((long)*(int *)(param_1 + 0x68) * 8 + 0x877930);
    uVar3 = *puVar7;
    uVar6 = (uint)uVar3;
    uVar4 = puVar7[1];
    if (uVar4 < uVar3) {
      return false;
    }
    do {
      uVar6 = uVar6 & 0xffff;
      if ((int)param_2 <= (int)uVar6) {
        local_44[0] = 0;
        local_80 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        FUN__text__005ffbe4(&local_80,local_44,uVar6,0);
        if (local_44[0] == 0) {
          local_44[0] = 10;
        }
        uVar8 = 0;
        do {
          uVar5 = FUN__text__00325c10(uVar6,uVar8 & 0xffffffff);
          if ((uVar5 & 0x8001) != 0) {
            return true;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_44[0]);
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffff) <= (uint)uVar4);
  }
  return false;
}


