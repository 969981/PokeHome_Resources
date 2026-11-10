/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c3b8; name: thunk_FUN_.text__0066c2d8
 */


bool thunk_FUN__text__0066c2d8(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_2;
      if (bVar3 == 0 || param_3 == 0) break;
      uVar6 = uVar4 - 0x61;
      uVar7 = uVar4 - 0x20;
      uVar5 = bVar3 - 0x20;
      uVar1 = uVar7;
      if (0x19 < (uVar6 & 0xff)) {
        uVar1 = uVar4;
      }
      uVar8 = bVar3 - 0x61;
      uVar2 = uVar5;
      if (0x19 < uVar8) {
        uVar2 = (uint)bVar3;
      }
      if ((uVar1 & 0xff) != (uVar2 & 0xff)) goto LAB__text__0066c34c;
      uVar4 = (uint)*param_1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  if (param_3 == 0) {
    return true;
  }
  bVar3 = *param_2;
  uVar6 = uVar4 - 0x61;
  uVar7 = uVar4 - 0x20;
  uVar8 = bVar3 - 0x61;
  uVar5 = bVar3 - 0x20;
LAB__text__0066c34c:
  if (0x19 < (uVar6 & 0xff)) {
    uVar7 = uVar4;
  }
  if (0x19 < (uVar8 & 0xff)) {
    uVar5 = (uint)bVar3;
  }
  return (uVar7 & 0xff) == (uVar5 & 0xff);
}


