/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004731d0; name: FUN_.text__004731d0
 */


void FUN__text__004731d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (DAT_00aea810 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    puVar2 = DAT_00aea810;
    do {
      lVar3 = puVar2[1];
      if ((*(long *)(lVar3 + 0x2a8) == 0) && ((*(ushort *)((long)puVar2 + 0x14) & 0xfe) == 0)) {
        if (((*(byte *)(lVar3 + 0x314) >> 4 & 1) == 0) || (*(int *)(lVar3 + 0x380) != -1)) {
          iVar1 = FUN__text__004161d0();
          puVar6 = (undefined8 *)*puVar2;
          if (iVar1 == 1) goto LAB__text__00473214;
          puVar5 = &DAT_00aea810;
          if (DAT_00aea810 != puVar2) {
            puVar5 = puVar4;
          }
          *puVar5 = puVar6;
          if (DAT_00aea818 == puVar2) {
            DAT_00aea818 = puVar4;
            if (DAT_00aea828 <= puVar2) goto LAB__text__00473324;
LAB__text__00473344:
            FUN__text__00400fc0(5,puVar2);
          }
          else {
            if (puVar2 < DAT_00aea828) goto LAB__text__00473344;
LAB__text__00473324:
            if (DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar2) goto LAB__text__00473344;
            *puVar2 = DAT_00aea820;
            DAT_00aea820 = puVar2;
          }
          DAT_00aea834 = DAT_00aea834 + -1;
          puVar2 = puVar6;
        }
        else {
          puVar5 = (undefined8 *)*puVar2;
          puVar6 = &DAT_00aea810;
          if (DAT_00aea810 != puVar2) {
            puVar6 = puVar4;
          }
          *puVar6 = puVar5;
          if (DAT_00aea818 == puVar2) {
            DAT_00aea818 = puVar4;
            if (DAT_00aea828 <= puVar2) goto LAB__text__004732cc;
LAB__text__004732ec:
            FUN__text__00400fc0(5,puVar2);
          }
          else {
            if (puVar2 < DAT_00aea828) goto LAB__text__004732ec;
LAB__text__004732cc:
            if (DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar2) goto LAB__text__004732ec;
            *puVar2 = DAT_00aea820;
            DAT_00aea820 = puVar2;
          }
          DAT_00aea834 = DAT_00aea834 + -1;
          FUN__text__00475a44(lVar3,1);
          puVar2 = puVar5;
        }
      }
      else {
        puVar6 = (undefined8 *)*puVar2;
LAB__text__00473214:
        puVar4 = puVar2;
        puVar2 = puVar6;
      }
    } while (puVar2 != (undefined8 *)0x0);
  }
  DAT_00aea838 = 0;
  return;
}


