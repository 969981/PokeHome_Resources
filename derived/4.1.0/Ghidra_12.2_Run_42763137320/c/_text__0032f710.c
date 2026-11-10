/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0032f710; name: FUN_.text__0032f710
 */


int FUN__text__0032f710(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  long lVar4;
  long local_18;
  
  lVar3 = FUN__text__00321ac0();
  if (*(int *)(lVar3 + 0x934c8) != 0) {
    local_18 = 0;
    iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
    if (iVar2 == 0) {
      lVar4 = FUN__text__00321ac0();
      lVar3 = *(int *)(lVar4 + 0x934c8) - local_18;
      if (lVar3 != 0 && local_18 <= *(int *)(lVar4 + 0x934c8)) {
        auVar1 = SEXT816(lVar3 * 1000000000) * SEXT816(0x112e0be826d694b3);
        return (int)(auVar1._8_8_ >> 0x1a) - (auVar1._12_4_ >> 0x1f);
      }
    }
  }
  return 0;
}


