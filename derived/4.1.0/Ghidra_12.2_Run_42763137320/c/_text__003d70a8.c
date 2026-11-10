/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d70a8; name: FUN_.text__003d70a8
 */


undefined8 FUN__text__003d70a8(long *param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_50 [8];
  undefined2 local_48 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar5 = FUN__text__003d6e54(param_1,&local_40,(ulong)&local_40 | 4,&local_38);
  if (iVar5 == 0) {
    lVar1 = *param_1 + 0x8a09f909ae60000;
    local_34 = (int)(lVar1 / 36000000000) % 0x18;
    auVar3 = SEXT816(lVar1 / 10) * SEXT816(0x20c49ba5e353f7cf);
    auVar4 = SEXT816(lVar1 / 10000) * SEXT816(0x20c49ba5e353f7cf);
    local_24 = (int)(lVar1 / 10) + ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) * -1000;
    local_28 = (int)(lVar1 / 10000) + ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f)) * -1000;
    auVar3 = SEXT816(lVar1 / 600000000) * ZEXT816(0x8888888888888889);
    auVar4 = SEXT816(lVar1 / 10000000) * ZEXT816(0x8888888888888889);
    local_30 = (int)(lVar1 / 600000000) +
               ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
    local_2c = (int)(lVar1 / 10000000) +
               ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c;
    uVar7 = *param_3;
    uVar8 = -uVar7;
    if (-1 < (long)uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 < 864000000000) {
      iVar5 = (int)((long)uVar7 / 600000000);
      if (iVar5 == 0) {
        local_48[0] = 0x5a;
      }
      else {
        if (iVar5 < 1) {
          uVar8 = (ulong)(uint)-iVar5;
          uVar6 = 0x7147c5;
          uVar2 = (uint)-iVar5 % 0x3c;
        }
        else {
          uVar8 = (long)uVar7 / 600000000 & 0xffffffff;
          uVar6 = 0x718c36;
          uVar2 = iVar5 + (int)(uVar8 / 0x3c) * -0x3c;
        }
        FUN__text__003d7320(auStack_50,local_48,uVar6,uVar8 / 0x3c,uVar2);
      }
      uVar6 = FUN__text__003db520(auStack_50,param_2,0x70fb49,local_40,uStack_3c,local_38,local_34,
                                  local_30,local_2c,local_24 / 10000,local_48);
      return uVar6;
    }
  }
  return 0x22;
}


