/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065afa0; name: FUN_.text__0065afa0
 */


void FUN__text__0065afa0(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    auVar6 = FUN__text__0066c6a8();
    lVar2 = auVar6._0_8_;
    lVar3 = FUN__text__0066be80(0,0,*(undefined8 *)(param_1 + 0xb0));
    *(long *)(param_1 + 0xb0) = lVar3;
    uVar5 = 0;
    lVar4 = *(long *)(lVar3 + 0x20);
    if (lVar2 <= lVar4) {
      if ((lVar2 < lVar4) || (auVar6._8_4_ < *(int *)(lVar3 + 0x28))) {
        uVar1 = FUN__text__0066c6d8(lVar4,*(undefined8 *)(lVar3 + 0x28),lVar2,auVar6._8_8_);
        if ((int)uVar1 < 2) {
          uVar1 = 1;
        }
        uVar5 = (ulong)uVar1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_2 = uVar5;
  return;
}


