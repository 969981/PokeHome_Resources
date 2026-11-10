/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039054c; name: FUN_.text__0039054c
 */


bool FUN__text__0039054c(undefined8 param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = FUN__text__005fdb18(0x38a);
  uVar3 = FUN__text__005fdb18(0x38b);
  uVar4 = FUN__text__005fdb18(0x38c);
  uVar5 = FUN__text__005fdb18(0x38d);
  uVar6 = FUN__text__005fdb18(0x38e);
  uVar7 = FUN__text__005fdb18(0x38f);
  uVar8 = FUN__text__005fdb18(0x390);
  uVar9 = FUN__text__005fdb18(0x391);
  uVar10 = FUN__text__005fdb18(0x392);
  uVar11 = FUN__text__005fdb18(0x3f1);
  uVar12 = FUN__text__005fdb18(0x3f2);
  uVar13 = FUN__text__005fdb18(0x401);
  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    bVar1 = true;
    if (uVar11 != param_3 && uVar12 != param_3) {
      bVar1 = uVar13 == param_3;
    }
  }
  else {
    if (param_2 != 0) {
      return false;
    }
    param_3 = param_3 & 0xffff;
    bVar1 = (((((((uVar2 == param_3 || uVar3 == param_3) || uVar4 == param_3) || uVar5 == param_3)
               || uVar6 == param_3) || uVar7 == param_3) || uVar8 == param_3) || uVar9 == param_3)
            || uVar10 == param_3;
  }
  return bVar1;
}


