/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472fc0; name: FUN_.text__00472fc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00472fc0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_00aea810 != (undefined8 *)0x0) {
    puVar2 = DAT_00aea810;
    puVar4 = (undefined8 *)0x0;
    do {
      while (puVar3 = puVar2, puVar2 = (undefined8 *)*puVar3, puVar3[1] != param_1) {
        puVar4 = puVar3;
        if (puVar2 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar1 = &DAT_00aea810;
      if (DAT_00aea810 != puVar3) {
        puVar1 = puVar4;
      }
      *puVar1 = puVar2;
      if (DAT_00aea818 == puVar3) {
        DAT_00aea818 = puVar4;
        if (DAT_00aea828 <= puVar3 && puVar3 < DAT_00aea828 + (ulong)DAT_00aea830 * 3)
        goto LAB__text__00473088;
LAB__text__0047304c:
        FUN__text__00400fc0(5);
      }
      else {
        if (puVar3 < DAT_00aea828 || DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar3)
        goto LAB__text__0047304c;
LAB__text__00473088:
        *puVar3 = DAT_00aea820;
        DAT_00aea820 = puVar3;
      }
      DAT_00aea834 = DAT_00aea834 + -1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


