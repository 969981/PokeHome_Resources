/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686d04; name: FUN_.text__00686d04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00686d04(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = _DAT_008a6620;
  puVar3 = _DAT_008a6620 + 0x1a;
  *_DAT_008a6620 = 2;
  nnosSignalEvent(puVar3);
  do {
    nnosWaitEvent(puVar2 + 4);
    nnosLockMutex(puVar2 + 0xe);
    *puVar2 = 3;
    puVar1 = (undefined8 *)**(long **)(puVar2 + 0x18);
    while (puVar1 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar1[2];
      uVar6 = *puVar1;
      nnosUnlockMutex(puVar2 + 0xe);
      nnosWaitThread(uVar6);
      nnosLockMutex(puVar2 + 0xe);
      FUN__text__00656b90(*(undefined8 *)(puVar2 + 0x18),puVar1,0);
      puVar1 = puVar7;
    }
    if (puVar2[1] == 0) {
      lVar4 = FUN__text__00656c60(*(undefined8 *)(puVar2 + 0x16));
      lVar5 = FUN__text__00656c60(*(undefined8 *)(puVar2 + 0x18));
      if (lVar4 + lVar5 == 0) {
        *puVar2 = 4;
        nnosUnlockMutex(puVar2 + 0xe);
        return 0;
      }
    }
    nnosUnlockMutex(puVar2 + 0xe);
  } while( true );
}


