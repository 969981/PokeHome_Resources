/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00167a0c; name: FUN_.text__00167a0c
 */


void FUN__text__00167a0c(void)

{
  long lVar1;
  
  FUN__text__00167a70();
  lVar1 = DAT_008e1698;
  (**(code **)**(undefined8 **)(DAT_008e1698 + 8))();
  *(undefined8 *)(lVar1 + 8) = 0;
  (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
            (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),8)
  ;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}


