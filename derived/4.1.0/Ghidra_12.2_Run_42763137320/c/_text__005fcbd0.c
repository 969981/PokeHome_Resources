/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fcbd0; name: FUN_.text__005fcbd0
 */


void FUN__text__005fcbd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = FUN__text__00635c70(param_2,param_3);
  if ((uVar7 & 1) != 0) {
    uVar2 = FUN__text__00631008(param_2);
    uVar3 = FUN__text__00631010(param_2);
    uVar4 = FUN__text__00632408(param_2);
    uVar1 = FUN__text__005ffc50(uVar2,uVar3,param_3);
    if (uVar1 != 0) {
      uVar8 = 0;
      do {
        uVar5 = FUN__text__005ffce8(uVar2,uVar3,uVar8,param_3);
        uVar6 = FUN__text__00600044(uVar2,uVar3,uVar8,param_3);
        if (((uVar5 & 0xffff) == 0x66) || ((uVar5 & 0xffff) <= uVar4)) {
          FUN__text__005fcce0(param_1,uVar6,param_3,param_4,param_2,0);
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
  }
  return;
}


