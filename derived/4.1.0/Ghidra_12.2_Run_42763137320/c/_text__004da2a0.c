/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da2a0; name: FUN_.text__004da2a0
 */


void FUN__text__004da2a0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (DAT_00aeabf0 != 0) {
    do {
      lVar2 = DAT_00aeabf0;
      if (DAT_00aeabf0 == 0) {
        return;
      }
      lVar5 = 0;
      lVar6 = DAT_00aeabf0;
      do {
        while( true ) {
          uVar3 = FUN__text__00459d00(*(undefined8 *)(lVar6 + 0x218));
          lVar4 = *(long *)(lVar6 + 0x70);
          if ((uVar3 & 1) != 0) break;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x220) = *(undefined8 *)(lVar6 + 0x220);
            lVar4 = *(long *)(lVar6 + 0x70);
          }
          plVar1 = &DAT_00aeabf0;
          if (DAT_00aeabf0 != lVar6) {
            plVar1 = (long *)(lVar5 + 0x70);
          }
          *plVar1 = lVar4;
          *(undefined8 *)(lVar6 + 0x220) = 0;
          *(undefined8 *)(lVar6 + 0x70) = 0;
          lVar6 = lVar4;
          if (lVar4 == 0) goto LAB__text__004da334;
        }
        lVar5 = lVar6;
        lVar6 = lVar4;
      } while (lVar4 != 0);
LAB__text__004da334:
    } while (lVar2 != DAT_00aeabf0);
  }
  return;
}


