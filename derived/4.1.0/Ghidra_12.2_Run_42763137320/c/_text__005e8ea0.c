/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8ea0; name: FUN_.text__005e8ea0
 */


undefined8 FUN__text__005e8ea0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((DAT_00c13340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c13340), iVar1 != 0)) {
    FUN__text__005e8f90(&DAT_00c13338,&DAT__text__005e8c84);
    FUN__text__001001d0(0x5e8fbc,&DAT_00c13338,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c13340);
  }
  lVar2 = FUN__text__005e8fc4(&DAT_00c13338);
  if (lVar2 == 0) {
    FUN__text__005e8e18();
    uVar3 = FUN__text__005e8fcc();
    FUN__text__005e8c58(uVar3,0);
    FUN__text__005e903c(&DAT_00c13338,uVar3);
  }
  uVar3 = FUN__text__005e8fc4(&DAT_00c13338);
  lVar2 = FUN__text__005e9044();
  if (lVar2 == 0) {
    FUN__text__005e904c(uVar3);
  }
  return uVar3;
}


