/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633e68; name: FUN_.text__00633e68
 */


void FUN__text__00633e68(long param_1,uint param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  if (iVar2 == 0x379) {
    iVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    if (iVar2 != 0x379) goto LAB__text__00633f54;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30e;
LAB__text__00633f44:
      uVar4 = 0x1ba;
    }
    else {
      if ((param_2 & 0xffff) != 1) goto LAB__text__00633f54;
      sVar1 = FUN__text__00610050(*(undefined8 *)(param_1 + 0x2f0));
      if (sVar1 != 0x450) goto LAB__text__00633f54;
      uVar3 = 0x1ba;
      uVar4 = 0x30e;
    }
  }
  else {
    if (iVar2 != 0x378) {
      if (iVar2 == 0x286) {
        FUN__text__00633f70(param_1,param_2,param_3);
      }
      goto LAB__text__00633f54;
    }
    iVar2 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    if (iVar2 != 0x378) goto LAB__text__00633f54;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30d;
      goto LAB__text__00633f44;
    }
    if ((param_2 & 0xffff) != 1) goto LAB__text__00633f54;
    sVar1 = FUN__text__00610050(*(undefined8 *)(param_1 + 0x2f0));
    if (sVar1 != 0x44f) goto LAB__text__00633f54;
    uVar3 = 0x1ba;
    uVar4 = 0x30d;
  }
  FUN__text__006342d0(param_1,uVar3,uVar4,param_3);
LAB__text__00633f54:
  FUN__text__0063338c(param_1);
  FUN__text__0063321c(param_1);
  return;
}


