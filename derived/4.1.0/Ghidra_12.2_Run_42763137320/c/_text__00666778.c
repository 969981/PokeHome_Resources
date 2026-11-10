/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666778; name: FUN_.text__00666778
 */


undefined8 FUN__text__00666778(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((long)param_1 < 100000) {
    uVar1 = 0x71f8d2;
  }
  else if (param_1 >> 0xe < 0x271) {
    param_1 = param_1 >> 10;
    uVar1 = 0x7109ba;
  }
  else {
    if (param_1 >> 0x16 < 0x19) {
      uVar2 = param_1 >> 0x14;
      uVar1 = 0x71c6d2;
      uVar3 = (ulong)((uint)param_1 & 0xfffff) / 0x19999;
LAB__text__00666848:
      FUN__text__006599c0(param_2,6,uVar1,uVar2,uVar3);
      return param_2;
    }
    if (param_1 >> 0x18 < 0x271) {
      param_1 = param_1 >> 0x14;
      uVar1 = 0x716e4f;
    }
    else {
      if (param_1 >> 0x20 < 0x19) {
        uVar2 = param_1 >> 0x1e;
        uVar1 = 0x716e55;
        uVar3 = (ulong)((uint)param_1 & 0x3ffffffe) / 0x6666666;
        goto LAB__text__00666848;
      }
      if (param_1 >> 0x22 < 0x271) {
        param_1 = param_1 >> 0x1e;
        uVar1 = 0x71a503;
      }
      else if (param_1 >> 0x2c < 0x271) {
        param_1 = param_1 >> 0x28;
        uVar1 = 0x714a1e;
      }
      else {
        param_1 = param_1 >> 0x32;
        uVar1 = 0x70b2ca;
      }
    }
  }
  FUN__text__006599c0(param_2,6,uVar1,param_1);
  return param_2;
}


