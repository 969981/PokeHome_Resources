/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602850; name: FUN_.text__00602850
 */


void FUN__text__00602850(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN__text__005fe6ac();
  FUN__text__0063c420();
  FUN__text__00644db0();
  FUN__text__0064a760();
  FUN__text__00643670();
  FUN__text__00640aa0();
  FUN__text__00646800();
  FUN__text__0063f3a0();
  FUN__text__00642400();
  FUN__text__00600fe0();
  FUN__text__006029a0();
  lVar2 = DAT_00c15d80;
  DAT_00c15d80 = 0;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = 0x240;
  do {
    lVar1 = lVar2 + lVar3;
    if ((*(long *)(lVar1 + 0x68) != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0xcbf29ce484222645;
    *(undefined8 *)(lVar1 + 0x60) = 0x70f683;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    if (*(long *)(lVar1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x70) + 0x48) + 0x18))();
    }
    lVar3 = lVar3 + -0x30;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0x78) = 0;
  } while (lVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00602938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00c15d88 + 0x18))(DAT_00c15d88,lVar2,DAT_00c15d90,DAT_00c15d98);
  return;
}


