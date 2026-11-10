/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633c7c; name: FUN_.text__00633c7c
 */


void FUN__text__00633c7c(long param_1,uint param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar4 & 0xffff) != (param_2 & 0xffff)) {
    FUN__text__00633e68(param_1,param_2,param_3);
    FUN__text__0061e8a0(*(undefined8 *)(param_1 + 0x2f0),param_2);
    uVar5 = FUN__text__00615df0(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)(param_1 + 0x54));
    uVar8 = FUN__text__006162b0(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)(param_1 + 0x54));
    uVar4 = 2;
    if ((uVar8 & 1) == 0) {
      uVar4 = uVar5 & 1;
    }
    uVar6 = FUN__text__00638c38(uVar3,param_2,uVar4,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061cfb0(*(undefined8 *)(param_1 + 0x2f0),uVar6,*(undefined1 *)(param_1 + 0x54));
    uVar6 = FUN__text__006157c0(*(undefined8 *)(param_1 + 0x2f0));
    uVar3 = FUN__text__00638bb8(uVar3,param_2,uVar6,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061e710(*(undefined8 *)(param_1 + 0x2f0),uVar3);
    FUN__text__006316f4(param_1,1);
    uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar1 = FUN__text__0061ba50(*(undefined8 *)(param_1 + 0x2f0));
    uVar2 = FUN__text__0061bbd0(*(undefined8 *)(param_1 + 0x2f0));
    uVar9 = FUN__text__00638558(uVar3,uVar6,uVar1);
    uVar3 = FUN__text__006385b0(uVar3,uVar6,uVar2,uVar1);
    FUN__text__00622260(uVar9,*(undefined8 *)(param_1 + 0x2f0),3);
    FUN__text__006224e0(uVar3,*(undefined8 *)(param_1 + 0x2f0),3);
    iVar7 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    if ((iVar7 == 0x3f9) && ((uVar4 & 0xffff) < 4)) {
      FUN__text__006217f0(*(undefined8 *)(param_1 + 0x2f0),0x5090a0b >> (ulong)((uVar4 & 3) << 3));
      return;
    }
  }
  return;
}


