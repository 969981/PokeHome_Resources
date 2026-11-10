/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686bd8; name: FUN_.text__00686bd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN__text__00686bd8(void)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = _DAT_008a6620;
  if (*_DAT_008a6620 == 0) {
    piVar1 = _DAT_008a6620 + 1;
    *_DAT_008a6620 = 1;
    piVar2[1] = *piVar1 + 1;
    lVar3 = FUN__text__00686a30(0x4000,_DAT_008a6630,0,0x70eaa1);
    *(long *)(piVar2 + 2) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN__text__006783d4(0x20);
      *(long *)(piVar2 + 0x16) = lVar3;
      if (lVar3 != 0) {
        FUN__text__00656b14(lVar3,&DAT__text__00686de8);
        lVar3 = FUN__text__006783d4(0x20);
        *(long *)(piVar2 + 0x18) = lVar3;
        if (lVar3 != 0) {
          FUN__text__00656b14(lVar3,&LAB__text__00686dec);
          nnosInitializeMutex(piVar2 + 0xe,1,0);
          nnosInitializeEvent(piVar2 + 4,0,1);
          piVar1 = piVar2 + 0x1a;
          nnosInitializeEvent(piVar1,0,1);
          nnosStartThread(*(undefined8 *)(piVar2 + 2));
          nnosWaitEvent(piVar1);
          nnosFinalizeEvent(piVar1);
          return piVar2;
        }
        goto LAB__text__00686c04;
      }
    }
  }
  if (*(long *)(piVar2 + 0x18) != 0) {
    FUN__text__00656c1c(*(long *)(piVar2 + 0x18),0);
  }
LAB__text__00686c04:
  if (*(long *)(piVar2 + 0x16) != 0) {
    FUN__text__00656c1c(*(long *)(piVar2 + 0x16),0);
  }
  if (*(long *)(piVar2 + 2) != 0) {
    FUN__text__00686b98();
  }
  *piVar2 = 0;
  memset(piVar2 + 4,0,0x58);
  return (int *)0x0;
}


