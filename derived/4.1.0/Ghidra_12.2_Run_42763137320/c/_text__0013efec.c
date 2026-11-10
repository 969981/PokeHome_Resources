/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013efec; name: FUN_.text__0013efec
 */


void FUN__text__0013efec(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xd00) != (code *)0x0) {
    (**(code **)(lVar2 + 0xd00))(lVar2 + 0xd20);
  }
  uVar1 = FUN__text__0012cdb0(lVar2 + 0x110,0x723a20);
  FUN__text__003ae340(uVar1,*(undefined4 *)(lVar2 + 0xda0),1);
  FUN__text__0013d0c4(lVar2);
  if (*(long *)(lVar2 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


